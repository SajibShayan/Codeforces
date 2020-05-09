#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, v, i;
     while(cin>>n)
	 {
	 	//string s;
	 	int count=1,arr[n];
       for(i=1;i<=n;i++)
	   {
	   	cin>>arr[i];
	   }
	   for(i=2;i<=n;i++)
	   {
	   	if(arr[i-1]!=arr[i])count++;

	   }
        cout<<count<<endl;
     }
    return 0;
}
