//calculate the sum of first and third & second and fourth

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number";
    cin >> n;
    int l, f, m, o;
    l= n%10;

    f= n/1000;
    m= n/10;
    m= m%10;
    o= n/100;
    o= o%10;

    cout<<"sum of second and last digit is:"<<f+n;
    cout<<"sum of first and third digit is:"<<l+m;

}