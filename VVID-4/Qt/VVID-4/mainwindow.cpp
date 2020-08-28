#include "mainwindow.h"
#include "funcs.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_2->setValidator(new QIntValidator(1, 10000));
    ui->lineEdit_4->setValidator(new QIntValidator(1, 100));

    connect(ui->lineEdit_5, SIGNAL(textEdited(QString)), this, SLOT(editAlg(QString)));
    connect(ui->lineEdit_6, SIGNAL(textEdited(QString)), this, SLOT(edit6(QString)));
    connect(ui->lineEdit, SIGNAL(textEdited(QString)), this, SLOT(editT(QString)));
    connect(ui->lineEdit_3, SIGNAL(textEdited(QString)), this, SLOT(editNum(QString)));

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(algCall()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(CallPalindrom()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(CallGlas()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(CallSogl()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(CallLetters()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(okrug()));
    connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(callA()));
    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(callZ()));
}

void MainWindow::algCall()
{
    ui->textBrowser->setText(alg(ui->lineEdit_5->text(), ui->lineEdit_2->text().toInt()));
}

void MainWindow::CallPalindrom()
{
    if(palindrom(ui->lineEdit->text())) ui->textBrowser_2->setText("Является палинромом");
    else {
        ui->textBrowser_2->setText("Не является палиндромом");
    }
}

void MainWindow::CallGlas()
{
    ui->textBrowser_3->setText(QString::number(countGlas(ui->lineEdit->text())));
}

void MainWindow::CallSogl()
{
    ui->textBrowser_4->setText(QString::number(countSogl(ui->lineEdit->text())));
}

void MainWindow::CallLetters()
{
    ui->textBrowser_5->setText(QString::number(countLetters(ui->lineEdit->text())));
}

void MainWindow::callA()
{
    ui->textBrowser_8->setText(QString::number(countOfLetterA(ui->lineEdit_6->text())));
}

void MainWindow::callZ()
{
    ui->textBrowser_7->setText(QString::number(countOfLetterZ(ui->lineEdit_6->text())));
}

void MainWindow::okrug()
{
    if(ui->lineEdit_3->text().back() == ".") ui->lineEdit_3->setText(ui->lineEdit_3->text() + "0");
    ui->textBrowser_6->setText(okrugNK(ui->lineEdit_3->text(), ui->lineEdit_4->text().toInt()));
}

void MainWindow::editAlg(QString change)
{
    QString set = change;
    change = change.toLower();

    for(int i = 0; i < change.length(); i++)
    {
        if(change[i] < "a" || change[i] > "z")
        {
            change.remove(i, 1);
            set.remove(i, 1);
        }
    }

    ui->lineEdit_5->setText(set);
}

void MainWindow::edit6(QString change)
{
    QString set = change;
    change = change.toLower();

    for(int i = 0; i < change.length(); i++)
    {
        if(change[i] < "a" || change[i] > "z")
        {
            change.remove(i, 1);
            set.remove(i, 1);
        }
    }

    ui->lineEdit_6->setText(set);
}

void MainWindow::editT(QString change)
{
    QString set = change;
    change = change.toLower();

    for(int i = 0; i < change.length(); i++)
    {
        if(change[i] < "а" || change[i] > "я")
        {
            change.remove(i, 1);
            set.remove(i, 1);
        }
    }

    ui->lineEdit->setText(set);
}

void MainWindow::editNum(QString change)
{
    int dot = 0;

    for(int i = 0; i < change.length(); i++)
    {

        if(change[i] < "0" || change[i] > "9")
        {
            if(change[i] == "." && dot == 0 && i != 0)
            {
                dot = 1;
                continue;
            }

            change.remove(i, 1);
        }
    }

    ui->lineEdit_3->setText(change);
}

MainWindow::~MainWindow()
{
    delete ui;
}
