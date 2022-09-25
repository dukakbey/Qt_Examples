#pragma once

#include <QtWidgets/QWidget>
#include "ui_ListWidget_example.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ListWidget_exampleClass; };
QT_END_NAMESPACE

class ListWidget_example : public QWidget
{
    Q_OBJECT

public:
    ListWidget_example(QWidget *parent = nullptr);
    ~ListWidget_example();

private:
    Ui::ListWidget_exampleClass *ui;
};
