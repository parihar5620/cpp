#include <iostream>
using namespace std;

int main()

{
    int m;

    if (m<0)
    {
        cout<<"marks are -ve";
    }
    else
    {
        if(m>100)
        {
            cout<<"marks are more than 100";
        }
        else
        {
            if(m<33)
            {
                cout<<"pass";
            }
            else
            {
                cout<<"fail";
            }
        }
         

    }
}
