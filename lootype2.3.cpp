#include<iostream>
using namespace std;
int main()
{
int arr[] = {12,34,54,23,54,12,43};
int s;

s = sizeof(arr)/sizeof(arr[0]);

for(int i=0; i<s; i++)
{
    cout<<arr[i];
}
return 0;
}
