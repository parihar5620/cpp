#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter your number";
cin>>n;

for(int i=1; i<=n; i++)
{
    if(i%2==1)
    {
       
       cout<<"# ";
    }
    else
    {
        
        cout<<" * ";
    }
    
}

}