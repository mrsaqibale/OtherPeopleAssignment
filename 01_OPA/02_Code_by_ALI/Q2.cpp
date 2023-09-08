#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Please Etner the three Numbers\n";
    cin>>a>>b>>c;
    if(a>b && a>c)
    cout<<"1st Number is Greater\n";

    else if(b>a && b>c)
    cout<<"2st Number is Greater\n";
    
    else if(c>b && c>a)
    cout<<"3st Number is Greater\n";
    else 
    // cout<<"All the Number are Same \n";
    
    return 0;
}
