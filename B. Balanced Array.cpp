#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
   ll n;
   cin>>n;
   while(n--)
   {
   	ll a;
   	cin>>a;
   	if(a==2)
	{
		cout<<"NO"<<endl;
	}
      else if((a/2)%2!=0)
	  {
	  	cout<<"NO"<<endl;
	  }

	 else
	 {
	 	cout<<"YES"<<endl;

	 	 ll  j=0,k=-1,left=0,i,right=0;
	 	for(i=1;i<=a;i++)
		{

			if(i<=a/2)
			{
				j+=2;
				left+=j;
				cout<<j<<" ";

			}


			else
			{
				if(i<a)
				{
					k+=2;
					right+=k;
					cout<<k<<" ";

				}
				else if(i==a)
					cout<<left-right<<endl;


			}

		}

	 }


   }


}
