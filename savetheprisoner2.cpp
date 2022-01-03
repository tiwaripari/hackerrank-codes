#include<iostream>
using namespace std;
long long int candy(long long int n,long long int m,long long int s)
{
    long long int i=s,seat=0,count1=0;

    count1=(n-s)+1;
    if(count1>m)
    {
        seat=s+(m-1);
    }
    if(count1==m)
    {
        seat=(n-s);
    }
    if(count1<m)
    {
        seat=m-count1;
    }
    if(seat>n)
    {
       seat=seat%n;
       if(seat==0)
       {
           seat=n;
       }
    }
   return seat;

}
int main()
{
    long long int t,n,m,s;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>s;
         cout<<candy(n,m,s)<<endl;
    }

    return 0;
}

