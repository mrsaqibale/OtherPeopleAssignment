#include<iostream>
using namespace std;

int main()
{
    int a;
    cout <<"Please enter the Number \n";
    cin>>a;
    if(a>0)
    cout<<"Number is Positive\n";
    else if(a<0)
    cout <<"Number is Negative\n";
    else
    cout<<"Number is Equal to Zero\n";
    return 0;
}