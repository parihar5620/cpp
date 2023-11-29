#include<iostream>
using namespace std;
int main()
{
int n;

cout<<"enter an integer";
cin>>n;

if (n>0)
{
    cout<<"the number is +ve:"<<endl;
}
else if(n<0)
{
cout<<"the number is -ve:"<<endl;

if (n % 2 == 0)
{
    cout<<"-ve number is even:"<<endl;
} else {
    cout<<"-ve number is odd:"<<endl;

    if (n%5==0)
    {
        cout<<"the odd -ve number is also divisible by 5:"<<endl;
    
    if( n%3==0)
    {
        cout<<"the number is divisible by 3 also:"<<endl;
    }
    else{
        cout<<"the number is not divisible by 3:"<<endl;
    }
    
}
else {
    cout<<"the odd -ve number is not divisible by 5:"<<endl;
}
}
}
else {
    cout<<"the number is zero:"<<endl;
}
return 0;
}
