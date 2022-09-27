#pragma once

#include <QtWidgets/QWidget>
#include <QListWidgetItem>
QT_BEGIN_NAMESPACE
namespace Ui { class listWidgetClass; };
QT_END_NAMESPACE

class listWidget : public QWidget
{
    Q_OBJECT

public:
    explicit listWidget(QWidget *parent = nullptr);
    ~listWidget();

private slots:
    void readDataBtn_clicked();
private:
    Ui::listWidgetClass *ui;
    QStringList fruitList;
};
