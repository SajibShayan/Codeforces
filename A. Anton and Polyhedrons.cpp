#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0;
	//int T=4,C=6,O=8,D=12,I=20;
	string s;
	cin>>n;
	while(n--)
	{
		cin>> s;
		if(s[0]=='T')
		sum=sum+4;
		else if(s[0]=='C')
		sum=sum+6;
		else if(s[0]=='O')
			sum=sum+8;
		else if(s[0]=='D')
			sum=sum+12;
		else if(s[0]=='I')
			sum=sum+20;
	}
     cout<<sum;

}
