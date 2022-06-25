#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    QString str = ui->editNum->text();//读取“数量”
    int num = str.toInt();
    str = ui->editPrice->text();//读取单价
    float price = str.toFloat();
    float total = num * price;
    str = str.sprintf("%.2f",total);
    ui->editTotal->setText(str);
}


void Widget::on_btnDec_clicked()
{//读取10进制数据，转换为其他进制
    int val = ui->editDec->text().toInt();

    QString str = QString::number(val,16);//显示为16进制字符串
    str = str.toUpper();
    ui->editHex->setText(str);

    str = QString::number(val,2);//显示2进制的字符串
    ui->editBin->setText(str);
}


void Widget::on_btnBin_clicked()
{
    bool ok;

    int val=ui->editBin->text().toInt(&ok,2);//以二进制数读入

    QString str=QString::number(val,10);//数字显示为10进制字符串
    ui->editDec->setText(str);//显示10进制数字符串

    str=QString::number(val,16);//显示为十六进制字符串
    str=str.toUpper(); //全大写字母
    ui->editHex->setText(str);//显示十六进制字符串
}


void Widget::on_btnHex_clicked()
{
    bool ok;

    int val=ui->editHex->text().toInt(&ok,16);//以十六进制数读入
    QString str=QString::number(val,10);// 显示为10进制字符串
    ui->editDec->setText(str);//显示为10进制字符串

    str=QString::number(val,2);// 显示二进制字符串
    ui->editBin->setText(str);//显示二进制字符串
}

