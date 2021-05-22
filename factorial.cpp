#include <iostream>
using namespace std;
int pari(int num)
{
    int product=1;
    for(int i=1;i<=num;i++)
    {
        product=product*i;
    }

    return product;
}

int main()
{
    int n,r,ans;
    cin>>n>>r;

    cout<< pari(n)/(pari(n-r)*pari(r));


    return 0;
}
