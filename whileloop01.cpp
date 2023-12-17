#include<iostream>
using namespace std;

int main()
{
int n;
cout<<"Enter Number";
cin>>n;
int r;
int sum = 0;

while(n>0)
{
  r =n%10;
  sum = sum * 10 + r;
  n = n/10;

}
cout<<sum;
 return 0;
}