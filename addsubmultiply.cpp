#include<iostream>
using namespace std;
int main()
{
cout<<"enter 1st and 2nd number"<< endl;
int a,b, opt,ans=0;
cin>>a>>b;

cout<<"press 1 for add \n press 2 for minus \n press 3 for multiply \n";
cin>>opt;

if(opt==1)
ans = a+b;
else if (opt==2)
ans = a-b;
else if (opt==3)
ans = a*b;

else 
cout<<"wrong option choosed";


cout<<"ans is" <<ans;
}


