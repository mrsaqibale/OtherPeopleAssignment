#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Etner the sides of the Triangle \n";
    cin>>a>>b>>c;
    if (a + b <= c || a + c <= b || b + c <= a)
    cout<<"VALID\n";
    else 
    cout<<"Not Valid\n";
    
    return 0;
}