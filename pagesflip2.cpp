#include <iostream>
using namespace std;
int main()
{
    int i,n,p,count1,count2;
    cin>>n;
    cin>>p;
    if(p<=n && p>0)
     {for(int i=1;i<=n;i++)
        if(p==i )
          {if(p%2==0)
            count1=((p-1)/2)+1;
          else
            count1=(p-1)/2;}
          {if(n%2==0)
                {if(p%2==0 )
                    count2=(n-p)/2;
                if(p==n)
                    count2=0;
                if(p%2!=0)
                    count2=((n-p)/2)+1;

                }

          else
                count2=(n-p)/2 ;

                }
     }

    {if(count1>count2)
        cout<<count2;
    else
        cout<<count1;}
   return 0;
}

