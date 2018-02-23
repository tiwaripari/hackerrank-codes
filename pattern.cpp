#include <iostream>
using namespace std;
int main()
{
    int a,b;
    for(int a=1;a<=10;a++)
    { for(int b=1;b<=a;b++)
            cout<<"*";
                 cout<<"\n";
    }
    for(int a=1;a<=10;a++)
    {
        for(int b=10;b>=a;b--)
            cout<<"*";
        cout<<"\n";
    }


    return 0;
}
