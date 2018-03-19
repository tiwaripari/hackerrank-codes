#include <iostream>
using namespace std;
int main()
{
    double n,arr[10]={0},a=0,b=0,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {if(arr[i]>0)
       a=a+1;
      else if(arr[i]<0)
        b=b+1;
        else if(arr[i]==0)
        c=c+1;
    }

cout<<a/n<<endl;
    cout<<b/n<<endl;
    cout<<c/n<<endl;
        return 0;

}
