#include<iostream>
#include <cstdlib> 
using namespace std;
int main()
{
	int a[5][5],i=0,j=0,m=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]==1)
			{
				//cout<<"sagar";
				//cout<<i<<" "<<j;
				m=abs(i-2)+abs(j-2);
				cout<<m;
				break;
			}
		}
	}
	return 0;
}