#include <iostream>
using namespace std;
int findMin(long long int arr[],long long int n)
{
    long long int min=arr[0];
    for(int i=0;i<n;i++)
        if(arr[i]<min)
        min=arr[i];
    return min;
}
int findmax(long long int arr[],long long int n)
{
   long long int max=arr[0];
    for(int i=0;i<n;i++)
        if(arr[i]>max)
        max=arr[i];
    return max;
}
int main()
{
    long long int arr[5],d,sum=0,a,b,e;
    for(int i=0;i<5;i++)
        cin>>arr[i];
    d=findMin(arr,5);
    for(int i=0;i<5;i++)
   {sum=sum+arr[i];
   }
   {for(int i=0;i<5;i++)
        a=sum-d;
    }
    cout<<a;
for(int i=0;i<5;i++)
    e=findmax(arr,5);
    for(int i=0;i<5;i++)
    {
        b=sum-e;
    }
    cout<<" "<<b;
    return 0;

}


