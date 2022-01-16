#include<iostream>
using namespace std;
int main()
{
    int arr[100]={},brr[100]={0},t,maximum=arr[0];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<t;i++)
    {
        if(maximum<arr[i])
        {
            maximum=arr[i];
        }
    }
    for(int i=0;i<t;i++)
    {
        if(brr[arr[i]]==0)
        {
            brr[arr[i]]=1;
        }
        else if(brr[arr[i]]!=0)
        {
            brr[arr[i]]=brr[arr[i]]+1;
        }
    }
    int maximum2=brr[1];
    for(int i=1;i<=maximum;i++)
    {
        if(maximum2<brr[i])
        {
            maximum2=brr[i];
        }
    }

    cout<<t-maximum2;





}

