#include <iostream>
using namespace std;
int factorial(int num)
{
    int product=1;
    for(int i=1;i<=num;i++)
    {
        product=product*i;
    }
    cout<<product;
    return product;
}

int main()
{
    int n;
    cin>>n;
    factorial(n);
    return 0;
}
