#include<iostream>
using namespace std;
int main()
{
	int n,A=0,D=0;
	string s;
	cin>>n;
	cin>>s;
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]=='A'){
			A++;
		}
		else{
			D++;
		}
	}
	if(A>D){
		cout<<"Aton";
	}
	else if(A<D){
		cout<<"Danik";
	}
	else{
		cout<<"Friendship";
	}
	return 0;
}