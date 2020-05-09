#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
	{
		int sum=0,i,count=0,a;
		for(i=1;i<=n;i++)
		{
			cin>>a;
			if(a!=-1)
			{
			sum+=a;
			}

				else
				{
				   sum-=1;
				   if(sum<0)
				   {
				   	count++;
				   	sum=0;
				   }
				}


		}
		cout<<count<<endl;
	}
    return 0;
}
