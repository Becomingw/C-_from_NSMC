#include<iostream>
#include<string>
using namespace std
#include"身份证分析.h"
;void ID::fx()
{
char num[32]={11,12,13,14,15,21,22,23,31,32,33,34,35,36,37,41,
42,43,44,45,46,50,51,52,53,54,61,62,63,64,65};
string dq[32]={"北京市","天津市","河北省","山西省","内蒙古自治区",
		"辽宁省","吉林省","黑龙江省","上海市","江苏省","浙江省","安徽省",
		"福建省","江西省","山东省","河北省","湖北省","湖南省","广东省","广西壮族自治区"
		,"海南省","重庆市","四川省","贵州省","云南省","西藏自治区","陕西省","甘肃省",
		"青海省","宁夏回族自治区","新疆维吾尔自治区"};
if(flag==1)
{int x,y,z;
z=((id[0]-'0')*10+(id[1]-'0'));
int i=0;
for(i=0;i<32;i++)
	{if(z==num[i])
		{cout<<dq[i]<<endl;
		break;
		}
	else
		{if(i>=31)
		{
			cout<<"输入身份证号码有误"<<endl;
			flag=0;
		}
		}
	}
}
if(flag==1)
{int r,m,d;
r=(id[6]-'0')*1000+(id[7]-'0')*100+(id[8]-'0')*10+(id[9]-'0');
m=(id[10]-'0')*10+(id[11]-'0');
d=(id[12]-'0')*10+(id[13]-'0');
cout<<"生日为："<<r<<"年"<<m<<"月"<<d<<"日"<<endl;
}
}

