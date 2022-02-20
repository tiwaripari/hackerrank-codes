#include<iostream>
using namespace std;
int main()
{
    int y1,m1,d1,y2,m2,d2;
    cin>>d1>>m1>>y1>>d2>>m2>>y2;
    if(y1==y2)
    {
        if(m1==m2)
        {
            if(d1==d2||d1<d2)
            {
                cout<<"0";
            }
            else
            {
                cout<<15*(d1-d2);
            }
        }
        else if(m1<m2)
        {
            cout<<"0";
        }
        else
        {
            cout<<500*(m1-m2);
        }
    }
    else if(y1<y2)
    {
        cout<<"0";
    }
    else
    {
        cout<<"10000"<<endl;
    }
    return 0;
}
