#include<iostream>
using namespace std;
int rev(int n)
{
    int lastdigit=0,temp;
    while(n>0)
    {
        temp=n%10;
        lastdigit=lastdigit*10+temp;
        n=n/10;
    }
    return lastdigit;

}

int main()
{
    int n,temp,number=0;
    cin>>n;
    while(n>0)
    {
        temp=n%10;
        {
            if(temp%2==0)
            {
                temp=temp+1;
            }
            else
            {
                temp=temp-1;
            }
        }
        number=number*10+temp;
        n=n/10;
    }
    cout<<rev(number);
    return 0;
}
