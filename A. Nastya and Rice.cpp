#include<bits/stdc++.h>
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
     ll  a,b,c,d,w,x,y,t;
     cin>>t>>a>>b>>c>>d;
       w=a-b;
       x=a+b;
       y=c+d;

       if(w*t>y)
	   {
	   	cout<<"No"<<endl;
	   }
	   else if(x*t<c-d)
	   {
	   	cout<<"No"<<endl;
	   }
	   else
	   {
	   	cout<<"Yes"<<endl;
	   }


  }

   return 0;
}
