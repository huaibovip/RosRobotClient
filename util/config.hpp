#ifndef GLOBALDEF_HPP
#define GLOBALDEF_HPP

#include <QString>
#include <QDebug>
#include <QFile>

#ifndef LOADQSS
#define LOADQSS(qssFile)                        \
{                                               \
    QFile file(qssFile);                        \
    file.open(QFile::ReadOnly);                 \
    if(file.isOpen())                           \
    {                                           \
        qApp->setStyleSheet(file.readAll());    \
        file.close();                           \
    }                                           \
}
#endif

#ifndef SAFEDELETE
#define SAFEDELETE(pointer) \
{                           \
    if(pointer)             \
    {                       \
        delete pointer;     \
    }                       \
    pointer = nullptr;      \
}
#endif

enum WidgetType
{
    WIDGET_GAMEPAD,
    WIDGET_BLOCKLY,
    WIDGET_DIRCTION,
    WIDGET_SEQUENCES,
    WIDGET_SETTINGS,
    WIDGET_CALIBRATION,
    WIDGET_STATUS,
    WIDGET_DEBUG,
};

namespace GlobalSpace
{
const QString BLACK_QSS_FILE_PATH = ":/stylesheet/black.qss";
const QString LOGO_PATH = ":/image/image.png";
}
#endif // GLOBALDEF_HPP
