#include <iostream>
using namespace std;
int main()
{
    int arr[100]={0},a,b,n,i;
cin>>n;
for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
          if(arr[i]<38)
     {
         cout<<arr[i]<<endl;
     }
   else if (arr[i]%5==3)
    {

     cout<<arr[i]+2<<endl;}
     else if(arr[i]%5==2)
     {
         cout<<arr[i]<<endl;
     }

     else if(arr[i]%5==4)
    cout<<arr[i]+1<<endl;
else if(arr[i]%5==0||arr[i]%5==1)
    cout<<arr[i]<<endl;

return 0;
}
