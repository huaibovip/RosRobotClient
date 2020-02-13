/****************************************************************************
** Meta object code from reading C++ file 'socket_tcp_connection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../rosbridge/include/client/socket_tcp_connection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'socket_tcp_connection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rosbridge2cpp__SocketTCPConnection_t {
    QByteArrayData data[11];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rosbridge2cpp__SocketTCPConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rosbridge2cpp__SocketTCPConnection_t qt_meta_stringdata_rosbridge2cpp__SocketTCPConnection = {
    {
QT_MOC_LITERAL(0, 0, 34), // "rosbridge2cpp::SocketTCPConne..."
QT_MOC_LITERAL(1, 35, 12), // "newConnected"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 15), // "newDisconnected"
QT_MOC_LITERAL(4, 65, 18), // "newMessageReceived"
QT_MOC_LITERAL(5, 84, 8), // "msg_code"
QT_MOC_LITERAL(6, 93, 11), // "onConnected"
QT_MOC_LITERAL(7, 105, 14), // "onDisconnected"
QT_MOC_LITERAL(8, 120, 21), // "onTextMessageReceived"
QT_MOC_LITERAL(9, 142, 7), // "message"
QT_MOC_LITERAL(10, 150, 23) // "onBinaryMessageReceived"

    },
    "rosbridge2cpp::SocketTCPConnection\0"
    "newConnected\0\0newDisconnected\0"
    "newMessageReceived\0msg_code\0onConnected\0"
    "onDisconnected\0onTextMessageReceived\0"
    "message\0onBinaryMessageReceived"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rosbridge2cpp__SocketTCPConnection[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    1,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   54,    2, 0x0a /* Public */,
       7,    0,   55,    2, 0x0a /* Public */,
       8,    1,   56,    2, 0x0a /* Public */,
      10,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QByteArray,    9,

       0        // eod
};

void rosbridge2cpp::SocketTCPConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SocketTCPConnection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newConnected(); break;
        case 1: _t->newDisconnected(); break;
        case 2: _t->newMessageReceived((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onConnected(); break;
        case 4: _t->onDisconnected(); break;
        case 5: _t->onTextMessageReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->onBinaryMessageReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SocketTCPConnection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SocketTCPConnection::newConnected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SocketTCPConnection::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SocketTCPConnection::newDisconnected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SocketTCPConnection::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SocketTCPConnection::newMessageReceived)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rosbridge2cpp::SocketTCPConnection::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_rosbridge2cpp__SocketTCPConnection.data,
    qt_meta_data_rosbridge2cpp__SocketTCPConnection,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rosbridge2cpp::SocketTCPConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rosbridge2cpp::SocketTCPConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rosbridge2cpp__SocketTCPConnection.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int rosbridge2cpp::SocketTCPConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void rosbridge2cpp::SocketTCPConnection::newConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void rosbridge2cpp::SocketTCPConnection::newDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void rosbridge2cpp::SocketTCPConnection::newMessageReceived(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
