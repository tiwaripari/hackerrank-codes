#include<iostream>
using namespace std;
int maximum(int arr[],int len)
{
    int maximum=arr[0];
    for(int i=0;i<=len;i++)
    {
        if(maximum<arr[i])
        {
            maximum=arr[i];
        }
    }
    return maximum;
}
int main()
{
    int arr[100]={},n,count1[100]={0},maxima,sum=0,brr[100]={};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(int i=0;i<n;i++)
    {
        if(count1[arr[i]]==0)
        {
            count1[arr[i]]=1;
        }
        else if(count1[arr[i]]!=0)
        {
            count1[arr[i]]=count1[arr[i]]+1;
        }

    }

    maxima=maximum(arr,n);
    for(int j=0;j<=maxima;j++)
    {
        brr[j]=count1[j]/2;
    }
    for(int j=0;j<=maxima;j++)
    {
        sum=sum+brr[j];
    }
    cout<<sum;
    return 0;





}

