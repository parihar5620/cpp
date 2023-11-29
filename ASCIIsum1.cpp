#include<iostream>
using namespace std;

int main()
{
char ch;
cout<<"enter yuor alphabet";
cin>>ch;

switch (ch)
{
    case 'A':
    {
       cout<<"ascii is:"<<int(ch);
        break;
    }

    case 'B':
    {
        cout<<"ascii is:"<<int(ch);
        break;
    
    }

     case 'C':
     {
        cout<<"ascii is:"<<int(ch);
        break;
     }
     case 'D':
     {
        cout<<"ascii is:"<<int(ch);
        break;
     }
     default:{
        cout<<"wrong input";
     }
}




return 0;
}