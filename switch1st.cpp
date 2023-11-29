#include<iostream>
using namespace std;
int main()
{
int  a,b,c,ch;
cout<<"enter value of a and b";
cin>>a>>b;

cout<<"enter 1 for[+]"<<endl;
cout<<"enter 2 for[-]"<<endl;
cout<<"enter 3 for[*]"<<endl;
cout<<"enter 4 for[%]"<<endl;

cout<<"enter your choice:"<<endl;
cin>>ch;

switch(ch)
{
    case1:
    {
       cout<<a+b;
        break;
    }

    case2:
    {
        cout<<a-b;
        break;
    
    }

     case3:
     {
        cout<<a*b;
        break;
     }
     case4:
     {
        cout<<a%b;
        break;
     }
     default:{
        cout<<"wrong input";
     }

}
return 0;
}