#include <iostream>
using namespace std;
int main()
{
    int a,b=0,c=10,d=20;
    cout<<"  CALCULATE: 2*25/5-4 =  "<<endl;
    cin>>a;
    if(a==6)
     {cout<<" YES "<<endl;
       b=b+10;
                   cout<<b<<"POINTS"<<endl;
       }
    else
     {
         cout<<" NO "<<endl;

     }


     cout<<"  SIMPIFY: 5*10/2*4*2+4 = "<<endl;
     cin>>a;
     if(a==204)
        {cout<<" YES "<<endl;
        b=b+10;
                    cout<<b<<"POINTS"<<endl;
        }

        else
        {
            cout<< " NO "<<endl;

        }


        cout<<" SIMPLIFY: 6/3*5*2*3 = "<<endl;
        cin>>a;
        if(a==60)
           {cout<< " YES  "<<endl;
           b=b+10;
                       cout<<b<<"POINTS"<<endl;
            }
        else
        {
            cout<< " NO "<<endl;

        }

        cout<<" CALCULATE: 9+5+4-6/3*2 = "<<endl;
         cin>>a;
         if(a==14)
           {

            cout<< "  YES  "<<endl;
            b=b+10;
            cout<<b<<"POINTS"<<endl;}
        else
        {
            cout<< " NO "<<endl;

        }
        cout<< "Your Grand Total is  "<<b<<endl;
        return 0;

}
