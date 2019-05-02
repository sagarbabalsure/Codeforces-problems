#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	int i=0,j=0;
	cin>>s1>>s2;
	while(j<s2.length())
	{
		if(s2[j]==s1[i])
		{
			i++;
			j++;
		}
		else
		{
			j++;
		}
	}
	i++;
	cout<<i;
	return 0;
}