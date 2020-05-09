#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    string c,d,e;

    cin>>n;
    string a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

     for(int j=0;j<n;j++)
	 {




        if(a[j].substr( a[j].length() - 2 ) == "po")
        {
            cout<<"FILIPINO"<<endl;
        }
        else if(a[j].substr( a[j].length() - 4 ) == "desu" || a[j].substr( a[j].length() - 4 ) == "masu")
        {
            cout<<"JAPANESE"<<endl;
        }
        else if(a[j].substr( a[j].length() - 5 ) == "mnida")
        {
            cout<<"KOREAN"<<endl;
        }

	 }






}
