#include <iostream>
using namespace std;
int main()
{
    int x,y,z,n,d1[100]={},d2[100]{};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        cin>>y;
        cin>>z;
        d1[i]=z-x;
        if(d1[i]<0)
        {
            d1[i]=(-d1[i]);
        }
        d2[i]=z-y;
        if(d2[i]<0)
        {
            d2[i]=(-d2[i]);
        }
    }

     for(int i=0;i<n;i++)
        {


            if(d1[i]>d2[i])
             {
                cout<<"Cat B"<<endl;
             }
            if(d1[i]<d2[i])
             {
                cout<<"Cat A "<<endl;
             }
            if(d1[i]==d2[i])
            {
                cout<<"Mouse "<<endl;
            }
       }

    return 0;

}
