#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter age of all three persons";
cin>>a>>b>>c;
int y,o;

if(a>b)
{
    if (a>c)
    o = a;
    else
    o = c;

    if(a<c)
    y = a;
    else 
    y = c;
}

cout<<"Younger is"<<c<<"and older is "<<o;
}