#include <iostream>
using namespace std;
int main()
{
    int a,m,arr[100]={},c=0,d,sum=0,n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>a;
    cin>>m;

    for(int i=0;i<n;i++)
    {
        sum=0;

        for(int j=i;j<(i+(m));j++)
        {
           sum=sum+arr[j];
        }



    if(sum==a)
    {

     c=c+1;
     }
    }
cout<<c;

return 0;
}
