#include<iostream>
using namespace std;

int main()
{
// get the height and base from user
float height;
float base;

cout<<"enter the height of the triangle:";
cin >> height;
cout<<"enter the base of the triangle:";
cin >> base;

//calculate the area of triangle
float area = 1/2 * base * height;

//print the area of triangle
cout<<"area of the triangle is:" << area;

return 0;
}