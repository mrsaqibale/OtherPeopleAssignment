#include<iostream>
using namespace std;

int main()
{
    char a;
    cout<<"Enter the charecter number or special charecter\n";
    cin>>a;
    if(a>=97 && a<=122)
    cout<<"Its a Charecter\n";
    else if(a>=48 && a<=57)
    cout<<"Its a Number\n";
    else 
    cout<<"Its a special Charecter\n";
    return 0;
}