#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int rem=0,n=0,count1=0,num;
        cin>>num;
        n=num;
        while(n>0)
        {
            rem=n%10;

            if(rem!=0)

            {

                if(num%rem==0)
                {
                    count1=count1+1;

                }
            }

            n=n/10;
        }
        cout<<count1<<endl;

    }
    return 0;



}
