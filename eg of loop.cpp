#include <iostream>
using namespace std;
int main()
{
  int a,b;
    for(a=1;a<=5;a++)
    {
        for(int b=1;b<=a;b++)

    {
                  cout<<"*";
    }
       cout<<"\n";

    }
   for(int a=4;a>=1;a--)
   {
       for(b=1;b<=a;b++)
       {
           cout<<"*";
       }
       cout<<"\n";
   }
    return 0;
}
