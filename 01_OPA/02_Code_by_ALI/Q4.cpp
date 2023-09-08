#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the Number\n";
    cin>>a;
    if(a%5==0 && a%11==0)
    cout<<"The Number is divisible by 5 and 11"<<endl;
    else 
    cout<<"The Number is not devisible by 5 and 11"<<endl;
    return 0;
}