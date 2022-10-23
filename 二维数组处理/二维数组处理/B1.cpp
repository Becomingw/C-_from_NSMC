#include<iostream>
using namespace std;
int main()
{int sz[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
int i,j;
for(i=0;i<=3;i++)
	for(j=0;j<=3;j++)
	{if(j>i)
		{
			sz[i][j]=2*sz[i][j];
		}
		else if(j<i)
			{
				sz[i][j]=3*sz[i][j];
			}
	}
for(i=0;i<=3;i++)
	{
		cout<<endl;
		for(j=0;j<=3;j++)
		{
			cout<<sz[i][j]<<" ";
		}
	}
return 0;
}