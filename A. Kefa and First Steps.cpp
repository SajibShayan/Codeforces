#include <bits/stdc++.h>
using namespace std;
/*
int lenOfLongIncSubArr(int arr[], int n)
{



    // comparing the length of the last
    // increasing subarray with 'max'


    // required maximum length
    return max;
} */

// Driver program to test above
int main()
{
    //int arr[] = {5, 6, 3, 5, 7, 8, 9, 1, 2};
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int tlen = 1, len = 1;

    for (int i=1; i<n; i++)
    {
        if (arr[i-1] <= arr[i])
            len++;
        else
        {

            if (tlen < len)
                tlen = len;


            len = 1;
        }
    }
    if (tlen < len)
        tlen = len;
     cout<<tlen<<endl;

    //int n = sizeof(arr) / sizeof(arr[0]);
    //cout << lenOfLongIncSubArr(arr, n)<<endl;
    return 0;
}
