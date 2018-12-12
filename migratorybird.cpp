#include <iostream>
using namespace std;
int main()
{
    int a=0,b=0,arr[1000]={},n,c=0,d=0,e=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
            a=a+1;
        else if(arr[i]==2)
            b=b+1;
        else if(arr[i]==3)
            c=c+1;
        else if(arr[i]==4)
            d=d+1;
        else if(arr[i]==5)
            e=e+1;
    }
  int brr[5]={a,b,c,d,e},max=brr[0];
  for(int j=0;j<5;j++)
  {
      if(brr[j]>max)
      max=brr[j];

  }
  {
          if(max==a)
            cout<<"1";
          else if(max==b)
            cout<<"2";
          else if(max==c)
            cout<<"3";
          else if(max==d)
            cout<<"4";
            else if(max==e)
            cout<<"5";

      }


  return 0;
}
