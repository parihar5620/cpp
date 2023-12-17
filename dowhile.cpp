#include<iostream>
using namespace std;

int main()
{
int n,r,sum=0,t;
cout<<"enter your number:"<<endl;
cin>>n;
t=n;
do
{
    r=t/10;
    sum=sum+r;
    t=t/10;

  
} 
while (t>0);
    cout<<"sum is"<<sum<<endl;
}