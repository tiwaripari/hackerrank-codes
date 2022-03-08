#include<iostream>
using namespace std;

int main()
{
   long long int arr[100001]={},n,k,q,ques;
    cin>>n>>k>>q;
    if(k>=n)
    {
        k=k%n;
    }
    for(long long int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(long long int i=0;i<q;i++)
    {
        cin>>ques;
        if(ques-k>=0)
        {
            cout<<arr[ques-k]<<endl;
        }
        else if(ques-k<0)
        {
            cout<<arr[n+(ques-k)]<<endl;
        }
    }


    return 0;
}

