#include<iostream>
using namespace std;
int main()
{
	int a,b,i=0,y=0;
	cin>>a>>b;
	i=0;
	for(int i=0;i<a;i++)
	{
		if(a<=b)
		{
			y++;
			a=a*3;
			b=b*2;
		}

	}
	cout<<y;
	return 0;
}