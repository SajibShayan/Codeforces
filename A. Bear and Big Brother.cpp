#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,j,i,count=0;
	cin>>n>>j;

	  while(n<=j)
	  {
	  	n=n*3;
	  	j=j*2;
	  	count++;
	  }
       cout<<count;
}
