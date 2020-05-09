#include<bits/stdc++.h>
using namespace std;
int main()
{
	typedef long long int ll;
	ll x,y,a,b,n,c,d,e,f,g;
	cin>>n;
	while(n--)
	{
       cin>>x>>y>>a>>b;
       //lll sum=0;
       if(x==0&&y==0)
	   {
	   	cout<<0<<endl;
	   }
	   else if(x>y&&y==0)
	   {
	   	cout<<a*x<<endl;
	   }
		else if(y>x&&x==0)
				{
					cout<<a*y<<endl;
				}
		 else if(x==y)
		 {
		 	c=(x+y)*a;
		 	d=x*b;
		 	if(c<=d)
				cout<<c<<endl;
			else
				cout<<d<<endl;
		 }

	   else
	   {


		 	if(y>x)
			{
				c=y-x;
				d=c*a;
				e=x*b;
				f=d+e;
				g=(x+y)*a;
				//cout<<d+e<<endl;
				if(g<=f)
					cout<<g<<endl;
				else
					cout<<f<<endl;

			}
			else if(x>y)
			{
				c=x-y;
				d=c*a;
				e=y*b;
				f=d+e;
				g=(x+y)*a;
				//cout<<d+e<<endl;
				if(g<=f)
					cout<<g<<endl;
				else
					cout<<f<<endl;
			}





	   }

	}


}

