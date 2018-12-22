#include<iostream>
using namespace std;
int main()
{
    int arr[100]={},n,dish,i,actual,bill,sum=0;
    cin>>n;
    cin>>dish;
    for(int i=0;i<n;i++)
            cin>>arr[i];
    cin>>bill;
    for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
        }
    actual=(sum-arr[dish])/2;
    if(actual==bill)
        {
            cout<<"Bon Appetit";
        }
    else
        {
            cout<<bill-actual<<endl;
        }

    return 0;
}

