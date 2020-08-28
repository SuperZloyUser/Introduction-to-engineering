#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QProcess>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    Ui::MainWindow *ui;

private slots:
    void algCall();
    void CallPalindrom();
    void editAlg(QString);
    void editT(QString);
    void editNum(QString);
    void CallGlas();
    void CallSogl();
    void CallLetters();
    void okrug();
};



#endif // MAINWINDOW_H
