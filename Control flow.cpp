#include <iostream>

using namespace std;

int main()
{   int marks;
    cin>>marks;
    if(marks>=90&&marks<=100)
        cout<<"Dancer\n";
    else if(marks<90&&marks>=10)
        cout<<"Scientist\n";

    else
    {   marks <10;
        cout<<marks<<endl;
    }
    return 0;
}
