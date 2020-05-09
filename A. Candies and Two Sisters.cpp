#include<bits/stdc++.h>
using namespace std;
int main()
{
    typedef long long int ll;
    ll t,n,count,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<=2)
        {
            cout<<0<<endl;
        }
        else
        {
            if(n%2==0)
            {
                cout<<n/2-1<<endl;
            }
            else
            {
                cout<<n/2<<endl;
            }
        }
    }

    return 0;
}
