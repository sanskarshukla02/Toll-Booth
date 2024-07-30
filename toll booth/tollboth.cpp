#include<iostream>
#include<stdlib.h>
using namespace std;
class tollbooth{
    int tv;
    double tm;
    public:
    tollbooth(){
        tv=0;
        tm=0;
    }
    void payvehicle(){
    tv++;
    tm = tm + 10.8;
    }
    void nopay(){
        tv++;
    }
    void display(){
        cout<<"No of veh = "<<tv<<endl;
        cout<<"Money collected = "<<tm;
    }
};
int main()
{
    tollbooth t1;
    char ans;
    do
    {
        cout<<"what happened (p/n/d)?";
        cin>>ans;
        switch (ans)
        {
        case 'p':
            t1.payvehicle();
            break;
        case 'n':
            t1.nopay();
            break;
        case 'd':
            t1.display();
            exit(0);
        default:
            break;
        }

    } while (1);
    
}