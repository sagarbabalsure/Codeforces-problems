#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	int x=0,y=0;
	cin>>s;
	for(int i=0;s[i]!='\0';i++)
	{
		if(int (s[i])>=65 && int(s[i])<=90) 
		{
			x++;
		}
		else{
			y++;
		}
	}
	for(int i=0;s[i]!='\0';i++)
	{
		if(x>y)
		{
			s[i]=toupper(s[i]);
		}
		else{
			s[i]=tolower(s[i]);
		}
	}
	cout<<s;
	return 0;
}