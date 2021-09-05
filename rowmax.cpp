#include <iostream>
using namespace std;
int main()
{
    int arr[100][100],brr[100][100],d[100],n,m;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }

    }
    for(int i=0;i<n;i++)
    {
        int maximum=arr[i][0];
        for(int j=0;j<m;j++)
        {

            {
                if(maximum<arr[i][j])
                {
                    maximum=arr[i][j];
                }

            }

        }
        d[i]= maximum;
    }
    for(int i=0;i<n;i++)
    {
        cout<<d[i]<<endl;
    }
    return 0;
}
