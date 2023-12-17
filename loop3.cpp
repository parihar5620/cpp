#include<iostream>
using namespace std;
int main()
{
int n ;
cout<<"enter your number";
cin>>n;


for(int i=1; i<=n; i++)
{
   for(int j=1; j<=(2*i)-i; j++)
  {
    if(j%2==1)
    {
      cout<<"*";
    }
    else
    {
        cout<<"  ";
    }
  }
    cout<<endl;      
}

return 0;
}