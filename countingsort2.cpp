#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[1000000]={},brr[101]={};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int count=1;
        if(brr[arr[i]]!=0)
        {
            continue;
        }
        else
        {
            for(int j=i+1;j<n;j++)
            {
                 if(arr[i]==arr[j])
                 {
                     count++;
                 }
            }
            brr[arr[i]]=count;
        }
    }
    for(int i=0;i<100;i++)
    {
        if(brr[i]==0)
        {
            continue;
        }
        else
        {
            for(int j=0;j<brr[i];j++)
            {
                cout<<i<<" ";
            }
        }
    }
    return 0;
}

