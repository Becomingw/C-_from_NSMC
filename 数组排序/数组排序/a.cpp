#include<iostream>
using namespace std;
int main()
{
	void px(int sz[],int n);
	void print(int sz[],int n);
	int sz[22];
	int i;
	for(i=1;i<21;i++)
		{
			cin>>sz[i];
		}
	px(sz,21);
	print(sz,21);
	cin>>sz[21];
	px(sz,22);
	print(sz,22);
	return 0;
}
void px(int sz[],int n)
{int a,b,t;
	for(a=1;a<n-1;a++)
		for(b=1;b<n-a;b++)
		{
			if(sz[b]>sz[b+1])
			{
			t=sz[b];sz[b]=sz[b+1];sz[b+1]=t;
			}
		}
}
void print(int sz[],int n)
{int i;
for(i=1;i<n;i++)
{
	cout<<sz[i]<<"  ";
}
}