#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qmath.h>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setShowGrid(true);
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_selectFirstFunction_clicked()
{
    currentFunction = 1;
    ui->selectedFunction->setText("Вы выбрали функцию: y = cos2x - 5sin(x) - 3");
}

void MainWindow::on_selectSecondFunction_clicked()
{
    currentFunction = 2;
    ui->selectedFunction->setText("Вы выбрали функцию: y = 7^(1 + x^3) - 4^(1 - x^6)");
}

void MainWindow::on_calculate_clicked()
{
    if (!currentFunction) {
        call_message_box("Warning", "Нужно выбрать функцию!");
        return;
    }

    float start = ui->setStart->text().toFloat();
    float end = ui->setEnd->text().toFloat();
    float amountPoints = ui->setAmountPoints->text().toFloat();

    if (!start || !end || !amountPoints) {
        call_message_box("Warning", "Заполните все поля!");
        return;
    }

    for (int var = 0; var < ui->tableWidget->rowCount(); ++var) {
        ui->tableWidget->removeRow(var);
    }

    ui->tableWidget->clear();
    calculateDataForTableAndRenderIt(start, end, amountPoints);
}

void MainWindow::calculateDataForTableAndRenderIt(float start, float end, float amountPoints) {
    float result = 0;
    for (float i = start; i <= end; i+= amountPoints) {
        if (currentFunction == 1) {
            result = cos(2*i) - 5 * sin(end) - 3;
        }
        if (currentFunction == 2) {
            result = qPow(7, 1 + qPow(i, 3)) - qPow(4, 1 - qPow(i, 6));
        }

        ui->tableWidget->insertRow(0);
        ui->tableWidget->setItem(0,0, new QTableWidgetItem(QString::number(i)));
        ui->tableWidget->setItem(0,1, new QTableWidgetItem(QString::number(end)));
        ui->tableWidget->setItem(0,2, new QTableWidgetItem(QString::number(amountPoints)));
        ui->tableWidget->setItem(0,3, new QTableWidgetItem(QString::number(result)));
    }

    ui->tableWidget->resizeColumnsToContents();
}

void MainWindow::call_message_box(QString title, QString text) {
    QMessageBox msgBox;
    msgBox.setWindowTitle(title);
    msgBox.setText(text);
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.exec();
}
