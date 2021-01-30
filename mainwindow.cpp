#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "cnlhelper.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_Change_clicked()
{
    if(ui->tb_CN->toPlainText().trimmed().length() <= 0)
    {
        QMessageBox::warning(this,QStringLiteral("提示"),QStringLiteral("请输入内容!"));
        return;
    }
    //转换并赋值
    ui->tb_PY->setPlainText(CNLHelper::Instance()->CNToPY(ui->tb_CN->toPlainText()));
    ui->tb_PY2->setPlainText(CNLHelper::Instance()->CNToEL(ui->tb_CN->toPlainText()));
    ui->tb_PY3->setPlainText(CNLHelper::Instance()->CNToFL(ui->tb_CN->toPlainText()));
}
