#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int x[3],y[3],z[3],i=0,count=0;
	for(i=0;i<n;i++)
	{
	cin>>x[i]>>y[i]>>z[i];
	}
	for(i=0;i<n;i++)
	{
	if(x[i]+y[i]+z[i]>=2){
		count++;
	}
	}
	cout<<count;
	return 0;
}