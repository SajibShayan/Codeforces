#include<bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;
int main()
{
  typedef long long int ll;
  ll  n;
  while(cin>>n)

  {


  //cin>>n;
  ostringstream strg;
   strg<< n;
string s1 = strg.str();
ll count=0,i;
ll len=s1.size();
for( i=0;i<len;i++)
{
	if(s1[i]=='4'||s1[i]=='7')count++;
}
     if(count==4||count==7)
	 {
	 	cout<<"YES"<<endl;
	 }
	 else
		cout<<"NO"<<endl;

  }
   return 0;
}
