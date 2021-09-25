#include <iostream>
using namespace std;
int main()
{
    int n,temp,sum=0;
    cin>>n;
    while(n>0)
    {
        temp=n%10;
        {
            if(temp%2==0)
            {
                sum=sum+temp;
            }
        }
        n=n/10;
    }
    cout<<sum;
    return 0;
}
