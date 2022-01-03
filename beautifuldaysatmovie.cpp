#include<iostream>
using namespace std;
int reverse(int a)
{
    int num=a,rem=0,revnum=0;
    while(num>0)
    {
        rem=num%10;
        revnum=revnum*10+rem;
        num=num/10;
    }
    return revnum;
}
int main()
{
    int a,b,k,count1=0,temp=0;
    cin>>a>>b>>k;
    for(int i=a;i<=b;i++)
    {
        if((reverse(i))>i)
        {
            temp=(reverse(i)-i);
        }
        else
        {
            temp=(i-reverse(i));
        }
        if(temp%k==0)
        {
            count1=count1+1;
        }
    }
    cout<<count1;
    return 0;




}
