
#include <bits/stdc++.h>

using namespace std;

int main()

 {
 	typedef long long int ll;
 	  ll n;
 cin>>n;
     while(n--)
	 {
	 	ll a;
	 	cin>>a;
	 	if(a==2)
		{
			cout<<2<<endl;
		}
		else
		{


	 	ll arr[a]={},b,i;
	 	b=a;
	 	arr[1]=1;
	 	for(i=1;i<=a;i++)
		{
              if(i==1)
			arr[i]*=2;
			else
				arr[i]=arr[i-1]*2;
		}
          ll sum1=0,sum2=0;
		 sum1+=arr[b];
		 for(i=1;i<=a-1;i++)
		 {
		 	if(i<=(a/2)-1)
			{
				sum1+=arr[i];
			}
			else
			{
				sum2+=arr[i];
			}

		 }
		 cout<<sum1-sum2<<endl;


		}
	 }



	return 0;
}

