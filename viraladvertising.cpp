#include<iostream>
using namespace std;
int viraladvertisment(int n)
{
    int liked=2,cumulative=2,num=(n-1);
    while(num--)
    {
        liked=(liked*3)/2;
        cout<<liked<<endl;
        cumulative=cumulative+liked;

    }
   return cumulative;

}
int main()
{
    int n;
    cin>>n;
    cout<<viraladvertisment(n)<<endl;
    return 0;
}
