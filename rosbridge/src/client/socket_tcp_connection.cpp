#include "client/socket_tcp_connection.h"

namespace rosbridge2cpp{
SocketTCPConnection::~SocketTCPConnection() {
    std::cout << "Connection Destructor called " << std::endl;
    std::cout << "Closing WebSocket" << std::endl;
}

bool SocketTCPConnection::Init(QUrl p_ip_addr){
    connect(&connect_to_, &QWebSocket::connected, this, &SocketTCPConnection::onConnected, Qt::AutoConnection);
    connect(&connect_to_, &QWebSocket::disconnected, this, &SocketTCPConnection::onDisconnected, Qt::AutoConnection);

    ip_addr_ = p_ip_addr;
    connect_to_.open(ip_addr_);
    return true;
}

bool SocketTCPConnection::SendTextMessage(const QString &message)
{
    connect_to_.sendTextMessage(message);
    std::cout<<".\n[TCPConnection] Data(Text) send: " << message.toStdString() << "\n";
    return true;
}

bool SocketTCPConnection::sendBinaryMessage(const QByteArray &data)
{
    connect_to_.sendBinaryMessage(data);
    std::cout<<".\n[TCPConnection] Data(Binary) send: " << data.toStdString() << "\n";
    return true;
}

void SocketTCPConnection::RegisterIncomingMessageCallback(std::function<void(json&)> fun){
    // TODO unify with report_error
    incoming_message_callback_ = fun;
    callback_function_defined_ = true;
}

void SocketTCPConnection::RegisterErrorCallback(std::function<void(QAbstractSocket::SocketError)> fun){
    error_callback_ = fun;
}

void SocketTCPConnection::ReportError(QAbstractSocket::SocketError err){
    if(error_callback_ == nullptr)
        return;

    error_callback_(err);
}

void SocketTCPConnection::onConnected()
{
    connect(&connect_to_, &QWebSocket::textMessageReceived, this, &SocketTCPConnection::onTextMessageReceived, Qt::AutoConnection);
    std::cout << ".\n[TCPConnection] Connected to ROS\n";
    emit newConnected();
}

void SocketTCPConnection::onDisconnected()
{
    connect_to_.close();
    emit newDisconnected();
}

void SocketTCPConnection::onTextMessageReceived(const QString &message)
{
    std::cout << ".\n[TCPConnection] Received(Text) bytes: " << message.size() << std::endl;

    // TODO catch parse error properly
    //j.Parse((char *)recv_buffer.get());
    json j;
    QByteArray temp = message.toLatin1();
    char* res = temp.data();
    j.Parse(res);
    // TODO Use a thread for the message callback?
    if(incoming_message_callback_){
        incoming_message_callback_(j);
    }
    std::cout.flush();
    emit newMessageReceived(MessageCode::TEXT);
}

void SocketTCPConnection::onBinaryMessageReceived(const QByteArray &message)
{
    std::cout << ".\n[TCPConnection] Received(Binary) bytes: " << message.size() << std::endl;

    json j;
    char* res = const_cast<char *>(message.data());
    j.Parse(res);
    // TODO Use a thread for the message callback?
    if(incoming_message_callback_){
        incoming_message_callback_(j);
    }
    std::cout.flush();
    emit newMessageReceived(MessageCode::BINARY);
}
}
