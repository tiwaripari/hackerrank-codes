#include <iostream>
using namespace std;
int multiply(int x,int y)
{   int c=x*y;
    return c;
}
int main()
{
    int a,b,d;
    cin>>a>>b;
    d=multiply(a,b);
    cout<<d;
    return 0;

}
