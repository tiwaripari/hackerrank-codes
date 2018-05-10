#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,x;
    cin>>a>>b>>c>>d;
    if(b==d)
        cout<<"NO"<<endl;
    x= -b*(c-a)/(d-b);

   if(-b*(c-a)%(d-b)==0)
   { if(a<c&&b>d)
        {

            if(x%b>0&&(x-(c-a))%d)
            cout<<"NO"<<endl;
            else if(x/b==(x-(c-a))/d)
            cout<<"YES"<<endl;

        }

    else if(a<c&&b<d)
     cout<<"NO"<<endl;}


     else
        cout<<"NO"<<endl;

    return 0;


}
