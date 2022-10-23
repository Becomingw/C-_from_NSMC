#include<iostream>
using namespace std;
int main()
{void fun(int a[],int,int*);
int a[5]={3,5,4,2,1};
int n=5,m=1;
int *p=&m;
fun(a,5,p);
cout<<*p<<endl;
return 0;
}
void fun(int a[],int n,int*p)
{int i,max=a[0];
for(i=0;i<n;i++)
	if (max<a[i])
	{
		max=a[i];
	}
*p=max;
}


