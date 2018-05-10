#include <iostream>
using namespace std;
int main()
{
    int arr[]={0},brr[]={0},a,b,s,t,m,n,sum=0,sumorange=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    for(int i=0;i<m;i++)
        cin>>arr[i];
    for(int j=0;j<n;j++)
    cin>>brr[j];

    for(int i=0;i<m;i++)
        if(a+arr[i]>=s&&a+arr[i]<=t)
    {
        sum=sum+1;
    }

    for(int j=0;j<n;j++)
    if(b+brr[j]>=s&&b+brr[j]<=t)
       {

        sumorange=sumorange+1;
       }
cout<<sum<<" "<<sumorange<<endl;

    return 0;
}
