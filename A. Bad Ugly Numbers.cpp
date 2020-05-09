#include<bits/stdc++.h>
#include<iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
  typedef long long int ll;
  ll   n;
  cin>>n;
  while(n--)

  {
  	ll t,i;
  	cin>>t;
  	if(t==1)
	{
		cout<<-1<<endl;
	}

  	else
	{


     string s="";
     //ll x=0;
     i=1;
     while(i<=t)
	 {
	 	if(i==1)
	 	s+='2';
	 	else
			s+='3';

			i++;
	 }


	  cout<<s<<endl;
	}


  }

   return 0;
}
