#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    fTimer = new QTimer(this);
    fTimer->stop();
    fTimer->setInterval(1000);//设置定时周期，单位：毫秒
    connect(fTimer,SIGNAL(timeout()),this,SLOT(on_timer_timeout()));
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_btnGetTime_clicked()
{
    //获取当前日期时间，为三个专用编辑器设置日期时间数据，并转换为字符串
    QDateTime curDatetime = QDateTime::currentDateTime();
    ui->timeEdit->setTime(curDatetime.time());
    ui->editTime->setText(curDatetime.toString("hh:mm:ss"));
    ui->dateEdit->setDate(curDatetime.date());
    ui->editDate->setText(curDatetime.toString("yyyy-MM-dd"));
    ui->dateTimeEdit->setDateTime(curDatetime);
    ui->editDateTime->setText(curDatetime.toString("yyyy-MM-dd hh:mm:ss"));
}


void Dialog::on_btnSetDateTime_clicked()
{
    //字符串转换为QDateTime
    QString str = ui->editDateTime->text();
    str=str.trimmed();
    if (!str.isEmpty())
    {
        QDateTime datetime = QDateTime::fromString(str,"yyyy-MM-dd hh:mm:ss");
        ui->dateTimeEdit->setDateTime(datetime);
    }
}


void Dialog::on_calendarWidget_selectionChanged()
{
    //在日历上选择日期
    QDate dt = ui->calendarWidget->selectedDate();
    QString str = dt.toString("yyyy年MM月d日");
    ui->editCalender->setText(str);
}

void Dialog::on_timer_timeout()
{
    //定时器中断响应
    QTime curTime = QTime::currentTime();//获取当前时间
    ui->LCDHour->display(curTime.hour());//显示 小时
    ui->LCDMin->display(curTime.minute());//显示 分钟
    ui->LCDSec->display(curTime.second());//显示 秒
    int va = ui->progressBar->value();
    va++;
    if (va>100)
        va=0;
    ui->progressBar->setValue(va);
}

void Dialog::on_btnStart_clicked()
{
    fTimer->start();//定时器开始工作
    fTimerCounter.start();//计时器开始工作
    ui->btnStart->setEnabled(0);
    ui->btnStop->setEnabled(1);
    ui->btnSetIntv->setEnabled(0);
}


void Dialog::on_btnStop_clicked()
{
    fTimer->stop();//定时器停止
    int tmMsec = fTimerCounter.elapsed();//毫秒数
    int ms = tmMsec%1000;
    int sec = tmMsec/1000;
    QString str = QString::asprintf("流逝时间： %d 秒， %d 毫秒",sec,ms);
    ui->LabElapsTime->setText(str);
    ui->btnStart->setEnabled(1);
    ui->btnStop->setEnabled(0);
    ui->btnSetIntv->setEnabled(1);

}


void Dialog::on_btnSetIntv_clicked()
{
    fTimer->setInterval(ui->spinBoxIntv->value());
}

