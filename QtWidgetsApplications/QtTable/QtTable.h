#pragma once

#include <QtWidgets/QWidget>
#include "ui_QtTable.h"

QT_BEGIN_NAMESPACE
namespace Ui { class QtTableClass; };
QT_END_NAMESPACE

class QtTable : public QWidget
{
    Q_OBJECT

public:
    explicit QtTable(QWidget *parent = nullptr);
    ~QtTable();

private:
    Ui::QtTableClass *ui;
    QVector<QVector<QString>> table;
    void newRow();
    void displayTable();
};
