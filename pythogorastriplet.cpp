#include <iostream>
using namespace std;
bool pyth(int x,int y,int z)
{
    int m1;
    if(x>y&&x>z)
    {
        m1=x;
    }
    if(y>x&&y>z)
    {
        m1=y;
    }
    else
        m1=z;
    if(m1*m1== (x*x+y*y+z*z)-(m1*m1))
    {
        return true;
    }
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(pyth(a,b,c))
        cout<<"Pythogoras triplets";
    return 0;

}
