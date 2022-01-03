#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,arr[100]={},ontime=0,late=0;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=0)
            {
                ontime=ontime+1;
            }
            else
            {
                late=late+1;
            }

        }
        if(ontime>=k)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
