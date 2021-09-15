#include <iostream>
using namespace std;
int main()
{
    int arr[100]={},n,k,maximum=arr[0],potion;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        if(maximum<arr[i])
        {
            maximum=arr[i];
        }
    }


        if(maximum>k)
        {
            potion=(maximum-k);
        }
        else
        {
            potion=0;
        }

    cout<<potion;
    return 0;
}
