#include<iostream>
#include<string>
#include"student.h"
;using namespace std;
void student::set()
{cout<<"请依次输入学号，姓名，年龄："<<endl;
cin>>num>>nam>>age;
}
void student::display()
{cout<<"学号：   "<<num<<endl;
cout<<"姓名：  "<<nam<<endl;
cout<<"年龄：  "<<age<<endl;
}
