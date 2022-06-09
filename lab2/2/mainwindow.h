#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int currentFunction = 0;

private slots:
    void on_selectFirstFunction_clicked();

    void on_selectSecondFunction_clicked();

    void on_calculate_clicked();

    void calculateDataForTableAndRenderIt(float start, float end, float amountPoints);

    void call_message_box(QString title, QString text);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
