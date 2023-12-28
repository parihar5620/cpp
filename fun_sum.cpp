#include<iostream>
using namespace std;
void fun_sum()
{
int x, sum = 0;
while(1)
{
    cout<<"enter no.";
    cin>>x;
    
    if(x!=0)
    {
    sum+=x;
    }
    else
    break;

}
cout<<"Answer is :"<<sum;
}
int main()
{
    fun_sum();
}