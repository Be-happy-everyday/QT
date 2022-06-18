#include "qperson.h"

QPerson::QPerson(QString fname , QObject *parent):QObject(parent)
{
    m_name = fname;
}

int QPerson::age()//返回age
{
    return m_age;
}

void QPerson::setAge(int value)//设置age
{
    m_age = value;
    emit ageChanged(m_age);//发射信号
}

void QPerson::incAge()
{
    m_age++;
    emit ageChanged(m_age);//发射信号
}
