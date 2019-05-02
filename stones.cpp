#include<iostream>
using namespace std;
int main()
{
	int n,x=0;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]==s[i+1]){x++;}
	}
	cout<<x;
	return 0;
}