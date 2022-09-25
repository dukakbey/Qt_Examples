#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_widget1.h"

QT_BEGIN_NAMESPACE
namespace Ui { class widget1Class; };
QT_END_NAMESPACE

class widget1 : public QMainWindow
{
    Q_OBJECT

public:
    widget1(QWidget *parent = nullptr);
    ~widget1();

private:
    Ui::widget1Class *ui;
};
