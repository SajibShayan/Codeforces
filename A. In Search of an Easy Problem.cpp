#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,d=0;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>a;

	    if(a==1)
			d++;
	}
      if(d>0)
		cout<<"HARD";
	  else
		cout<<"EASY";


}
