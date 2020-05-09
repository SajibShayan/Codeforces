
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
 {
     string str;
    while (cin>>str)
	{
 
 
    int len=str.size();
    int count=0,c=0;
     if(str[0]>=65 && str[0]>=92)c++;
    for(int i=0;i<=len;i++)
  {
 
 
	    if(str[i]>=65 && str[i]<=92)
	    {
		//str[i]=str[i]+32;
		count++;
	    }
 
 
  }
  if(count==len)
  {
  	for(int i=0;i<=len;i++)
  {
 
 
	    if(str[i]>=65 && str[i]<=92)
	    {
		str[i]=str[i]+32;
 
	    }
 
  }
  cout<<str<<endl;
 
  }
  else if(c==1&&count+1==len)
  {
  	 str[0]=str[0]-32;
  	 for(int i=1;i<=len;i++)
       {
 
 
	    if(str[i]>=65 && str[i]<=92)
	    {
		str[i]=str[i]+32;
 
	    }
 
 
          }
 
          cout<<str<<endl;
 
  }
 
 
    else
	{
		cout<<str<<endl;
	}
 
 
	}
	return 0;
}
?