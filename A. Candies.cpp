#include<bits/stdc++.h>
using namespace std;
int main()
{
  typedef long long int ll;
  int  n;
  cin>>n;
  while(n--)
  {
  	int a;
  	cin>>a;

		if(a%3==0)
		{
			cout<<a/3<<endl;
		}
		else if(a%5==0)
			{
				cout<<a/5<<endl;
			}
			else if(a%7==0)
			{
				cout<<a/7<<endl;
			}
		else
		{

				for(int i=11;i>0;i=i+2)
				{
					if(i%3!=0)
					{
						if(i%5!=0)
						{
							if(a%i==0)
							{
								cout<<a/i<<endl;
								break;
							}

							else
							{
								i++;
								i--;
							}
						}

					}

				}

		}


  }
   return 0;
}
