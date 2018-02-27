#include <iostream>
using namespace std;
int findMin(int arr[],int n)
{
    int min=arr[0];
    for(int i=0;i<n;i++)
        if(arr[i]<min)
        min=arr[i];
    return min;
}
int main()
{
    int arr[100]={0}, a,d;
    cin>>a;
    for(int i=0;i<a;i++)
        cin>>arr[i];
     d=findMin( arr,a);
    cout<<d;
    return 0;
}
