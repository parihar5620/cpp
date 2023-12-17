#include<iostream>
using namespace std;
int main()
{
int n ,j;
cout<<"enter your number";
cin>>n;

for(int i = 1 ; i<=n; i++)
{
  for( j = 1; j<=i; j++)  
  {
    if(j%2==1)
    {
        cout<<"# ";
    }
    else
    {
            cout<<" ";
    }
  }

cout<<endl;

}
return 0;
}
