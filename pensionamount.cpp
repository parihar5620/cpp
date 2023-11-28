#include<iostream>
using namespace std;
int main()
{
 char g;
 int age;

 cout<<"enter your gender:"<<endl;
 cin>>g;


 if (g=='m'|| g=='M')
 cout<<"males are not elegible for pension:"<<endl;

 else if(g=='f' || g=='F')
 
 cout<<"enter your age";
 
 cin>>age;
 if (age>=0 && age <= 15)
 {
    cout<<"you will get ₹100 from govt.";
 }
 else
 {if (age >=15 && age <=25)
   cout<<"you will get ₹500 from govt.";
}
if  (age>=26 && age<=50)
{
   cout<<"you will get ₹1000 from govt.";
}
 else if
(age>=51 && age<=100)
{
   cout<<"you will get 800 from govt.";
}
return 0;

}