#include<iostream>
using namespace std;

int main()
{

int n;
cout<<"enter the four digit number:";
cin>>n;
int a, b, c, d;

 a = n%10;
 b = (n/10)%10;
 c = (n/100)%10;
 d = (n/1000);

int reversednumber = 1000*a + 100*b + 10*c + d;

cout<<"the reverse of four digit number is:"<<reversednumber;



return 0;
}