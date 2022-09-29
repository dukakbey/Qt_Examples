#include "QtTable.h"
#include "ui_QtTable.h"
QtTable::QtTable(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::QtTableClass())
{
    ui->setupUi(this);
    displayTable();
    //table.append({ "John","Doe","32","Farmer","Single","Gounduana","Mestkv","89" });
    


    //int rows = table.size();
    //int columns = table[0].size();

    //for (int row = 0; row < rows; row++) {
    //    newRow();
    //    for (int col = 0; col < columns; col++) {
    //        //We are in a table cell
    //        ui->tableWidget->item(row, col)->setText(table[row][col]);
    //    }
    //}

    //ui->tableWidget->setAlternatingRowColors(true);

}

QtTable::~QtTable()
{
    delete ui;
}

void QtTable::displayTable()
{

    ui->tableWidget->setRowCount(8);
    ui->tableWidget->setColumnCount(8);
    QStringList labels;
    labels << "First Name" << "Last Name" << "Age" << "Proffession" << "Marital Status" << "Country" << "City" << "Social Score";
    ui->tableWidget->setHorizontalHeaderLabels(labels);

}
void QtTable::newRow()
{
    int row = ui->tableWidget->rowCount();

    ui->tableWidget->insertRow(row);

    QTableWidgetItem* first = nullptr;

    for (int i = 0; i < 8; i++) {
        QTableWidgetItem* item = new QTableWidgetItem;
        if (i == 0)
            first = item;
        item->setTextAlignment(Qt::AlignRight | Qt::AlignVCenter);
        ui->tableWidget->setItem(row, i, item);
    }

    if (first)
        ui->tableWidget->setCurrentItem(first);

}