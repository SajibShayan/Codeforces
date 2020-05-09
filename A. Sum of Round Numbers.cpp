#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{




   string s;
   cin>>s;

   int i,count,c,j;

   int len=s.size();

   if(len==1)
   {
   	cout<<1<<endl<<s<<endl;
   }
   else if(len>1)
   {

   	count=0,c=0;

   	for(i=0;i<len;i++)
	{
		if(s[i]!='0')c++;
		if(s[i+1]=='0')count++;



	}
	//cout<<c<<endl;
	if(count==len-1)
	{
		cout<<1<<endl<<s<<endl;
	}

		//int arr[c];
		//string arr[c];

	 if(c==len)
		{

			int d=1,f;
			string r="";
			cout<<c<<endl;
			for(i=1;i<=len;i++)
			{

				r+=s[i-1];

				f=len-d;
				while(f--)
				{
					r+="0";
                    //f--;
				}
				cout<<r<<" ";

				d++;
				r="";
			}

		}

	 if(c!=len && count!=len-1 )
	{
		string r="";
		int d=1,f;
		cout<<c<<endl;

		for(i=1;i<=len;i++)
			{
                if(s[i-1]!='0')
				{


				r+=s[i-1];

				f=len-d;
				while(f--)
				{
					r+="0";
                    //f--;
				}
				cout<<r<<" ";


				r="";
			}
                d++;

			}

	}


   }


	}
}
