#include<iostream>
#include"student.h"
;using namespace std;
void student::display()
{cout<<"学号："<<num<<endl;
cout<<"语文："<<ch<<endl;
cout<<"数学："<<mc<<endl;
}
void student::sum()
{
	cout<<"语文和数学和为： "<<ch+mc<<endl;
}
void student1::pj()
{cout<<"平均分："<<(yu()+su()+eg)/3<<endl;}
void student1::display1()
{cout<<"学号："<<hao()<<endl;
cout<<"语文："<<yu()<<endl;
cout<<"数学："<<su()<<endl;
cout<<"英语: "<<eg<<endl;}
void student1::sum()
{
	cout<<"语文·数学·英语总分："<<yu()+su()+eg<<endl;
}



