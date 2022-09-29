#include "QtTable.h"
#include "ui_QtTable.h"
QtTable::QtTable(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::QtTableClass())
{
    ui->setupUi(this);
    displayTable();
    
    


    
    ui->tableWidget->setAlternatingRowColors(true);

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
    table.append({ "John","Doe","32","Farmer","Single","Gounduana","Mestkv","89" });
    table.append({ "Mary","Jane","27","Teacher","Married","Verkso","Tukk","55" });
    table.append({ "John","Doe","32","Farmer","Single","Gounduana","Mestkv","67" });
    table.append({ "Mary","Jane","27","Teacher","Married","Verkso","Tukk","78" });
    table.append({ "John","Doe","32","Farmer","Single","Gounduana","Mestkv","51" });
    table.append({ "Mary","Jane","27","Teacher","Married","Verkso","Tukk","83" });
    table.append({ "John","Doe","32","Farmer","Single","Gounduana","Mestkv","59" });
    table.append({ "Mary","Jane","27","Teacher","Married","Verkso","Tukk","62" });

    ui->tableWidget->setHorizontalHeaderLabels(labels);
    
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            QTableWidgetItem* item = new QTableWidgetItem;
            item->setText(table[j][i]);
            ui->tableWidget->setItem(j, i, item);
        }

    }
    

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