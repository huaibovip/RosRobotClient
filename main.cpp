#include "mainwindow.h"
#include <util/config.hpp>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    // Disable web security when using cross-origin URL fetch.
    int newArgc = argc + 2;
    char** newArgv = new char*[newArgc];
    for (int i = 0; i < argc; i++) {
        newArgv[i] = argv[i];
    }

    QString str = "--disable-web-security";
    newArgv[argc] = str.toLatin1().data();
    newArgv[argc + 1] = nullptr;
    QApplication app(newArgc, newArgv);

    MainWindow w;
    LOADQSS(GlobalSpace::BLACK_QSS_FILE_PATH)
    w.show();

    return app.exec();
}
