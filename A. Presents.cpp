#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, v, i;
     while(cin>>n)
	 {


    int a[n], s[n];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        v=a[i];
        s[v]=i;

    }
    for(i=1;i<=n;i++)
    {
       cout<<s[i]<<" ";
    }

}
    return 0;
}
