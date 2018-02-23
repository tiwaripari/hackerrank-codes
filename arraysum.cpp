#include <iostream>
using namespace std;
int main()
 {
     int arr[100]={0},i,n,sum=0;
     cout<<"Enter the number of numbers you want"<<endl;
     cin>>n;
     cout<<"Enter "<<n<<"numbers"<<endl;

     for(i=0;i<n;i++)
        cin>>arr[i];

     for(i=0;i<n;i++)
        sum += arr[i];

        cout<<sum;

     return 0;
 }
