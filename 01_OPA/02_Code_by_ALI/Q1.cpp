#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Pleasse enter the two numbers"<<endl;
    cin>>a>>b;
    if(a>b)
    cout<<"1st Number is Greater \n";
    else if(a<b)
    cout<<"2nd Number is Greater \n";
    else
    cout<<"Both Number are Equal\n";
    
    return 0;
}