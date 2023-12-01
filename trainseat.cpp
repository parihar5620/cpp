#include <iostream>
using namespace std;

int main()
{
    int s;
    cout<<"Enter your Seat number: ";
    cin>>s;
    
    if(s<=0 || s>72)
    {
        cout<<"Your seat not exist in train";
    }
    else if(s%8==1 || s%8==4)
    {
        cout<<"LB";
    }
    else if(s%8==2 || s%8==5)
    {
        cout<<"MB";
    }    
    else if(s%8==3 || s%8==6)
    {
        cout<<"UB";
    }
    else if(s%8==7)
    {
        cout<<"SLB";
    }
    else
    {
        cout<<"SUB";
    }
}
