
#include <bits/stdc++.h>

using namespace std;

int main()
 {
     int n;
     cin>>n;
        //int  a=n*2 ;
     	//int i;

       int c=0,i,b,a;
        for(i=1;i<=n;i++)
		{
            cin>>a>>b;
            if(a==b)c++;
		}


		if(c==n)
		{
			cout<<"Poor Alex"<<endl;
		}
		else
		{
			cout<<"Happy Alex"<<endl;
		}




	return 0;
}
