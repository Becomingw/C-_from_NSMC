#include<iostream>
#include"student.h"
;using namespace std;
void student::display()
{cout<<"ѧ�ţ�"<<num<<endl;
cout<<"���ģ�"<<ch<<endl;
cout<<"��ѧ��"<<mc<<endl;
}
void student::sum()
{
	cout<<"���ĺ���ѧ��Ϊ�� "<<ch+mc<<endl;
}
void student1::pj()
{cout<<"ƽ���֣�"<<(yu()+su()+eg)/3<<endl;}
void student1::display1()
{cout<<"ѧ�ţ�"<<hao()<<endl;
cout<<"���ģ�"<<yu()<<endl;
cout<<"��ѧ��"<<su()<<endl;
cout<<"Ӣ��: "<<eg<<endl;}
void student1::sum()
{
	cout<<"���ġ���ѧ��Ӣ���ܷ֣�"<<yu()+su()+eg<<endl;
}



