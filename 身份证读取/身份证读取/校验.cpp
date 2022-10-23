#include<iostream>
#include"身份证分析.h"
;using namespace std;
void ID::jy()
{
int xs[18]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
int x,y=0;
for(x=0;x<18;x++)
{y=y+(xs[x]*(id[x]-'0'));}
char jy[12]={'1','0','x','9','8','7','6','5','4','3','2','\0'};
int z,i=0;
z=y%11;
char id1[18];
for(i=0;i<z;i++)
{jy[i];}
if(strlen(id)==18)
	{cout<<"校验码为："<<jy[i]<<endl;	
	if(id[17]-'0'==jy[i]-'0')
		cout<<"此身份证信息有效"<<endl;
	else
	{cout<<"校验码不符合，此身份证信息无效"<<endl;
	flag=0;}
    }
else {cout<<"输入位数有误，此身份证信息无效"<<endl;
flag=0;}
;}