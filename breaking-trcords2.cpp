#include <iostream>
using namespace std;
int main()
{
    int arr[1000]={0},i,n,max=arr[0],sum=0,summin=0;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
   int min=arr[0];
    for(int i=0;i<n;i++)
   {

     if(arr[i]>max)
      {
        max=arr[i];
         sum=sum+1;

      }

   }

    for(int i=0;i<n;i++)
   {
    if(arr[i]<min)
      {
        min=arr[i];

            summin=summin+1;

      }

   }
    {
      if(arr[0]==min)
       cout<<sum<<" ";
    else


        cout<<sum-1<<" ";
    }


    cout<<summin;


    return 0;
}
