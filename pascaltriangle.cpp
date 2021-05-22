#include <iostream>
using namespace std;
int fac(int num)
{
    int product=1;
    for(int i=1;i<=num;i++)
    {
        product=product*i;
    }

    return product;
}

int com(int n,int r)
{
    int ans;
    ans=fac(n)/(fac(n-r)*fac(r)) ;
    return ans;

}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
           {
               cout<<com(i,j)<<" ";
           }
        cout<<"\n";
    }

    return 0;
}
