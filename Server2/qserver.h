#ifndef QSERVER_H
#define QSERVER_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Qserver; }
QT_END_NAMESPACE

class Qserver : public QWidget
{
    Q_OBJECT

public:
    Qserver(QWidget *parent = nullptr);
    ~Qserver();

private:
    Ui::Qserver *ui;
};
#endif // QSERVER_H
