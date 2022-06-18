#include "qmywidget.h"
#include "ui_qmywidget.h"
#include <QMetaProperty>

qmywidget::qmywidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::qmywidget)
{//构造函数
    ui->setupUi(this);
    boy = new QPerson("王小明");
    boy->setProperty("score",95);
    boy->setProperty("age",10);
    boy->setProperty("sex","Boy");//动态属性
    connect(boy,&QPerson::ageChanged,this,&qmywidget::on_ageChanged);

    girl = new QPerson("张小丽");
    girl->setProperty("score",81);
    girl->setProperty("age",20);
    girl->setProperty("sex","Girl");
    connect(girl,&QPerson::ageChanged,this,&qmywidget::on_ageChanged);
    ui->spinBoy->setProperty("isBoy",true);//动态属性
    ui->spinGirl->setProperty("isBoy",false);//动态属性

    connect(ui->spinGirl,SIGNAL(valueChanged(int)),this,SLOT(on_spin_valueChanged(int)));
    connect(ui->spinBoy,SIGNAL(valueChanged(int)),this,SLOT(on_spin_valueChanged(int)));
}

qmywidget::~qmywidget()
{
    delete ui;
}

void qmywidget::on_ageChanged(int value)
{
//响应QPerson的ageChanged()信号
    Q_UNUSED(value);
    QPerson *aPerson = qobject_cast<QPerson *>(sender());//类型投影
    QString hisName = aPerson->property("name").toString();//姓名
    QString hisSex = aPerson->property("sex").toString();//动态属性
    int hisAge = aPerson->age();//通过属性获的年龄
    //iny hisAge = aPerson->property("sex").toIni();
    ui->textEdit->appendPlainText(hisName+","+hisSex+QString::asprintf(",年龄=%d",hisAge));
}

void    qmywidget::on_spin_valueChanged(int arg1)
{
    //响应界面上spinBox的valueChanged(int)信号
    Q_UNUSED(arg1);
    QSpinBox *spinBox = qobject_cast<QSpinBox *>(sender());
    if(spinBox->property("isBoy").toBool())
        boy->setAge(spinBox->value());
    else
        girl->setAge(spinBox->value());
}


void qmywidget::on_btnBoyInc_clicked()
{
    boy->incAge();
}


void qmywidget::on_btnGirlInc_clicked()
{
    girl->incAge();
}


void qmywidget::on_btnClear_clicked()
{
    ui->textEdit->clear();
}




void qmywidget::on_btnClassinfo_clicked()
{
    //"类的元对象信息"按钮
    const QMetaObject *meta = boy->metaObject();
    ui->textEdit->clear();
    ui->textEdit->appendPlainText("==元对象信息==\n");
    ui->textEdit->appendPlainText(QString("类名称 %1\n").arg(meta->className()));
    ui->textEdit->appendPlainText("property");

    for(int i = meta->propertyOffset(); i < meta->propertyCount();++i)
    {
        QMetaProperty prop = meta->property(i);
        const char* propName = prop.name();
        QString propValue = boy->property(propName).toString();
        ui->textEdit->appendPlainText(QString("属性名称=%1 , 属性值=%2").arg(propName).arg(propValue));
    }

    ui->textEdit->appendPlainText("");
    ui->textEdit->appendPlainText("classInfo");
    for (int i = meta->classInfoOffset();i < meta->classInfoCount();++i)
    {
        QMetaClassInfo classInfo = meta->classInfo(i);
        ui->textEdit->appendPlainText(QString("Name=%1; Value=%2").arg(classInfo.name()).arg(classInfo.value()));
    }
}

