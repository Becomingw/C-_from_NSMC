#include<iostream>
#include<string>
using namespace std;
class student
{public:
student()
{num=0;
nam="lihua";
age=0;
}
void set();
void display();
private:
	int num;
	string nam;
	int age;
}
