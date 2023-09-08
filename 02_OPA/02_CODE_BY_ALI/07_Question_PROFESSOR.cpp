// 7. Write a program that prints a multiplication table for numbers up to 12.
#include<iostream>
using namespace std;

int main()
{
    // code by ALI
    int a,n=12;
    cout<<"Enter the Number\n";
    cin>>a;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<" X "<<i<<" = "<<i*a;
        cout<<endl;
    }
    
    return 0;
}