#include "listWidget.h"
#include "ui_listWidget.h"
#include <QDebug>

listWidget::listWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::listWidgetClass())
{
    ui->setupUi(this);
    ui->listWidget->setIconSize(QSize(70, 70));
    
    fruitList << "apple" << "banana" << "orange";

    ui->listWidget->addItems(fruitList);
    for (int i = 0; i < ui->listWidget->count(); i++) {
        QListWidgetItem* item = ui->listWidget->item(i);
        QString filename = ":/images/" + fruitList[i].toLower() + ".png";
        item->setIcon(QIcon(filename));
        item->setData(Qt::UserRole, fruitList[i]);
        item->setData(Qt::DisplayRole, fruitList[i] + "Funny");

    }
}

listWidget::~listWidget()
{
    delete ui;
}
