#include "widget1.h"

widget1::widget1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::widget1Class())
{
    ui->setupUi(this);
}

widget1::~widget1()
{
    delete ui;
}
