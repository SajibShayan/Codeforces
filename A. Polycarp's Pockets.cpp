
#include <bits/stdc++.h>

using namespace std;

int main()
 {
     int n;
     while(cin>>n)
     {
     	int arr[n],i,c,d;
     	int a=n ;
        for(i=0;i<n;i++)
		{
			cin>>arr[i];

		}
		sort(arr,arr+n);
		c=1,d=0;
		for(i=1;i<=n;i++)
		{
			 if(arr[i-1]==arr[i])c++;
			 else
			 {
			 	if(c>d)
				{
					d=c;

				}
				c=1;
			 }
		}
		if(d>0)
		{
			cout<<d<<endl;
		}
		else
		{
			cout<<n<<endl;
		}
     }


	return 0;
}
