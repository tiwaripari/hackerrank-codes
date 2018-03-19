#include <iostream>
using namespace std;
int main()
{  int arr[10][10]={0},n,sum=0,sumright=0,a;
cin>>n;
    for(int i=0;i<n;i++) // bahar wala loop row banaega
    {
        for(int j=0;j<n;j++) //andar wala loop coloumn banaga
    cin>>arr[i][j];
   }
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {if (i==j)
        int sum=sum+arr[i][j];
        if(i==(n-1)-j)
        sumright=sumright+arr[i][j];


    }

    }
a=sum-sumright;
{if(a>0)
    cout<<a;
else if(a<0)
    cout<<-a;}




return 0;
}


