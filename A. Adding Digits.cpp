#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d,n,i,j=1,p,count=0,end;
    cin>>a>>b>>n;
    if(a%2==0&&b%2==0)
	   cout<<-1<<endl;

	 	while(n-->0)
		{
			c=a*10;


			for(j=1;j<=9;j++)
			{
				d=c+j;
				if(d%b==0)

				{
			           end;
				}
			}
             c=d;
		}



	 cout<<c<<endl;


    return 0;

}
