#include <iostream>
using namespace std;

int main()
{
cout<<"Enter 1 for UR"<<endl;
cout<<"Enter 2 for OBC"<<endl;
cout<<"Enter 3 for SC"<<endl;
cout<<"Enter 4 for ST"<<endl;
cout<<"Enter your category";
int c;
cin>>c;
cout<<"Enter 1 for Male"<<endl;
cout<<"Enter 2 for Female"<<endl;
cout<<"Enter your gender"<<endl;
int g;
cin>>g;

switch(c)
{
    case 1:{
        int e;
        cout<<"Are you in EWS??";
        cout<<"press 1 for yes and press 2 for no"<<endl;
        cin>>e;
        if(g==1 && e==1)
        {
         cout<<"Cut-off is 30";
        }
        else if(g==1 && e==2)
        {
            cout<<"Cut-off is 35";
        }
        else if(g==2 && e==1)
        {
            cout<<"Cut-off is 25";
        }
        else if (g==2 && e==2)
        {
            cout<<"Cut-off is 30";
        }
        
        
        
        break;
    }
    case 2:{
        if(g==1)
        {
            cout<<"Cut-off is 30";
        }
        else
        {
            cout<<"Cut-off is 25";
        }
        break;
    }
    case 3:{
        if(g==1)
        {
            cout<<"Cut-off is 25";
        }
        else
        {
            cout<<"Cut-off is 20";
        }
        
        break;
    }
    case 4:{
        if(g==1)
        {
            cout<<"Cut-off is 20";
        }
        else
        {
            cout<<"Cut-off is 15";
        }
        break;
    }
    default:{
        
        break;
    }
}


}