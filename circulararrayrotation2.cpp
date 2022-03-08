#include<iostream>
using namespace std;
void rotation(long long int arr[10000],long long int n,long long int k)
{
    if(k==0)
    {
        return;
    }

    for(long long int i=1;i<n;i++)
    {
        long long int tem1=arr[0];
        arr[0]=arr[i];
        arr[i]=tem1;

    }
    rotation(arr,n,k-1);

}
int main()
{
   long long int arr[10000]={},n,k,q,ques;
    cin>>n>>k>>q;
    if(k>=n)
    {
        k=k%n;
    }
    for(long long int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rotation(arr,n,k);
    for(long long int i=0;i<q;i++)
    {
        cin>>ques;
        cout<<arr[ques]<<endl;
    }


    return 0;
}
