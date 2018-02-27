#include <iostream>
using namespace std;
int findMax(int arr[],int n )
{ int max=arr[0];
      for(int i=0;i<n;i++)
      if(arr[i]>max)
          max=arr[i];
        return max;
}
int main()

{
int arr[100]={0},a,d;
cin>>a;
for(int i=0;i<a;i++)
cin>>arr[i];
d=findMax(arr,a);
    cout<<d;

 return 0;
}
