#ifndef MODELVIEW_H
#define MODELVIEW_H

#include <QWidget>
#include <QWebEngineView>
#include <QUrl>
#include <QFile>
#include <QString>
#include <QDebug>

class ModelView : public QWidget
{
    Q_OBJECT
public:
    explicit ModelView(QWidget *parent = nullptr);

signals:

public slots:
    void onConnectedToROS(QString IP);

private:
    QWebEngineView* view;
    void initValue();
};

#endif // MODELVIEW_H
