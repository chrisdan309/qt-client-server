#include "qserver.h"
#include "ui_qtcpserver.h"

QServer::QServer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::QTcpServer)
{
    ui->setupUi(this);
    connect(ui->btn_Close, &QAbstractButton::clicked, this, &QWidget::close);
    initServer();
}

QServer::~QServer()
{
    delete ui;
}

void QServer::sendRandomMessage()
{

}

void QServer::initServer()
{
    qDebug() << "asdasdasdsadsa";
    serverSocket = new QServer(this);

}



