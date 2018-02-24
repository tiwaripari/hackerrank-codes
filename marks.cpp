 #include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"       ENTER MAXIMUM MARKS       "<<endl;
    cin>>a;
    cout<<"       ENTER MARKS OBTAINED      "<<endl;
    cin>>b;
    c=b*100/a;
    cout<<"       Percentage                "<<c<<endl;
    if(c>=80&&c<100)
        cout<<"    EXCELLENT      "<<endl;
    else if(c>70&&c<80)
        cout<<"     OUTSTANDING     "<<endl;
        else if(c>60&&c<70)
    cout<<"         GOOD            "<<endl;
    else
        cout<< "  WORK  HARD     "<<endl;
    return 0;


}

