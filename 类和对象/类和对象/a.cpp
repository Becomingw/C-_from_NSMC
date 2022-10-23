#include<iostream>
using namespace std;
class circle
{public:
void s();
friend void c(circle&);
void set();
private:
	double r;
};
void circle::s()
{double s;
s=r*r*3.14;
cout<<"面积为"<<s<<endl;
}
void c(circle&d)
{double c;
c=d.r*6.28;
cout<<"周长为"<<c<<endl;
}
void circle::set()
{double input;
cin>>input;
r=input;
}
int main()
{circle yuan;
yuan.set();
yuan.s();
c(yuan);
return 0;}

