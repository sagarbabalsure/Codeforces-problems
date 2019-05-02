#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a1,a2,a3,a4,c=0;
	cin>>a1>>a2>>a3>>a4;
	string s;
	cin>>s;
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]=='1'){
			c=c+a1;
		}
		else if(s[i]=='2'){
			c=c+a2;
		}
		else if(s[i]=='3'){
			c=c+a3;
		}
		else if(s[i]=='4'){
			c=c+a4;
		}
		else{
			c=c+0;
		}
		
	}
	cout<<c;
	return 0;
}