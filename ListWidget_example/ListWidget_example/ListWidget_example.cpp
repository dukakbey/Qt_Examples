#include "ListWidget_example.h"

ListWidget_example::ListWidget_example(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ListWidget_exampleClass())
{
    ui->setupUi(this);
}

ListWidget_example::~ListWidget_example()
{
    delete ui;
}
