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


void Widget::on_btnInilItems_clicked()
{
    //"初始化列表"按钮
    QIcon icon;
    icon.addFile(":/images/icons/aim.ico");
    ui->comboBox->clear();
    for (int i = 0;i < 20; i++)
    {
        ui->comboBox->addItem(icon,QString::asprintf("Item %d",i));
    }
}


void Widget::on_btnIni2_clicked()
{
    //初始化具有自定义数据的ComBox
    QMap<QString, int> City_Zone;
    City_Zone.insert("北京",10);
    City_Zone.insert("上海",21);
    City_Zone.insert("天津",22);
    City_Zone.insert("大连",411);
    City_Zone.insert("锦州",416);
    City_Zone.insert("徐州",516);
    City_Zone.insert("福州",591);
    City_Zone.insert("青岛",532);

    ui->comboBox_2->clear();
    foreach(const QString &str , City_Zone.keys())
        ui->comboBox_2->addItem(str,City_Zone.value(str));

}


void Widget::on_btnClearItems_clicked()
{
    ui->comboBox->clear();
}


void Widget::on_comboBox_currentTextChanged(const QString &arg1)
{
    ui->plainTextEdit->appendPlainText(arg1);
}


void Widget::on_comboBox_2_currentTextChanged(const QString &arg1)
{
    QString zone = ui->comboBox_2->currentData().toString();//相关联的数据
    ui->plainTextEdit->appendPlainText(arg1+":区号="+zone);
}


void Widget::on_btntoComboBox_clicked()
{
    //plainTextEdit的内容逐行添加为comBox的项
    QTextDocument *doc = ui->plainTextEdit->document();//文本对象
    int cnt = doc->blockCount();//回车符是一个block
    QIcon icon(":/images/icons/aim.ico");
    ui->comboBox->clear();

    for (int i = 0; i < cnt ; i++)
    {
        QTextBlock textline = doc->findBlockByNumber(i);//文本中的一段
        QString str = textline.text();
        ui->comboBox->addItem(icon,str);

    }
}


void Widget::on_plainTextEdit_customContextMenuRequested(const QPoint &pos)
{
    //创建并显示出标准弹出菜单
    QMenu* menu = ui->plainTextEdit->createStandardContextMenu();
    menu->exec(pos);
}


void Widget::on_btnClearText_clicked()
{
    ui->plainTextEdit->clear();
}

