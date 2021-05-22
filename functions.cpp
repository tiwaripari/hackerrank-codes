#include <iostream>
using namespace std;
int fibonacci(int n)
{
    int  t1=0,t2=1,nextterm;
    for(int i=0;i<=n;i++)
    {
        cout<<t1<<endl;
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;

    }
     return 0;

}
int main()
{
    int num;
    cin>>num;
    fibonacci(num);
    return 0;
}
