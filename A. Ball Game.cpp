#include<iostream>
using namespace std;
int main()
{

    int t,a,i,sum;
    cin>>t;
      sum=2, a=2;
    for(i=1;i<=t-1;i++)
	{
		if(i==1)
		{
			cout<<sum<<" ";
		}
		else
		{

		  sum+=a;
		  a++;
		  if(sum>t)
		  {
		  	if(sum%t==0)
		  	cout<<t<<" ";
		  	else
				cout<<sum%t<<" ";
		  }
		  else
		  {
		  	cout<<sum<<" ";
		  }
		}


	}
	cout<<endl;
    return 0;
}
