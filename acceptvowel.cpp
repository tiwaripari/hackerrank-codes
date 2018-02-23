#include <iostream>
using namespace std;
int main()
{
    char ch[5];
    cout<<" ENTER A WORD   "<<endl;
    cin>>ch;
   for(int i=0;i<=4;i++)
    {if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
        cout<<ch[i]<<"     VOWEL     "<<endl;
    else
        cout<<ch[i]<<"    CONSONANT   " <<endl;
        }
    return 0;

}
