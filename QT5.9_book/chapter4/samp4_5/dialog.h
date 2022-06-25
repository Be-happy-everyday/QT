#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTimer>
#include <QTime>
#include <QElapsedTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();


private:
    QTimer *fTimer;//定时器
    QElapsedTimer fTimerCounter;//计时器


private slots:
    void on_btnGetTime_clicked();

    void on_btnSetDateTime_clicked();

    void on_calendarWidget_selectionChanged();

    void on_timer_timeout();//定时溢出处理槽函数

    void on_btnStart_clicked();

    void on_btnStop_clicked();

    void on_btnSetIntv_clicked();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
