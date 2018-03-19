#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int k=i;k<=n-1;k++)
            cout<<" ";
        for(int b=1;b<=i;b++)

             cout<<"#";

            cout<<"\n";




    }



    return 0;
}
