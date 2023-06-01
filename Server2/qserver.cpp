#include "qserver.h"
#include "ui_qserver.h"

Qserver::Qserver(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Qserver)
{
    ui->setupUi(this);
}

Qserver::~Qserver()
{
    delete ui;
}

