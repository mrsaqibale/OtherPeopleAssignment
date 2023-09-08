// 10.Write a program that prints the next 20 leap years.
#include<iostream>
using namespace std;

int main()
{
    // code by ali
    int i;
    cout<<"Enter the crnt \n";
    cin>>i;
    cout<<"The Leaps Year are :\n";
    for(int j=i;j<=i+80;j++)
    {
        if(j%4==0)
        {
        cout<<j<<endl;
        }
    }
    return 0;
}