#include<iostream>
using namespace std;

bool isOddEven(int n)
{
  if(n%2==1)
{
cout<<"function is odd";
}
else
{
    cout<<"function is even";
}
return n;
}
int main()
{
  isOddEven(45);
}