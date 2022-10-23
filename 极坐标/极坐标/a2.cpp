#include<iostream>
#include<cmath>
using namespace std;
int main()
{void fun(double,double,double*,double*);
double x,y;
double *p=&y;
double *t=&x;
cin>>x>>y;
fun(x,y,p,t);
cout<<"r="<<*p<<"  "<<"½Ç¶ÈÎª"<<*t<<endl;
return 0;
}
void fun(double x,double y,double*p,double*b)
{double a,c;
a=pow(x,2);
c=pow(y,2);
*p=sqrt(a+c);
*b=atan(y/x)*180/acos(-1.0);

}

