#ifndef QSERVER_H
#define QSERVER_H

#include <QWidget>
#include <QDebug>
#include <QTcpServer>
#include <QtNetwork>

QT_BEGIN_NAMESPACE
namespace Ui { class QTcpServer; }
QT_END_NAMESPACE

class QServer : public QWidget
{
    Q_OBJECT

public:
    QServer(QWidget *parent = nullptr);
    ~QServer();

private slots:
    void sendRandomMessage();


private:
    Ui::QTcpServer *ui;
    QServer *serverSocket = nullptr;

    void initServer();

};
#endif // QSERVER_H
