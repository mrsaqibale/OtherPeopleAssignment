// 4. Write a program that asks the user for a number n and prints the sum of the
// numbers 1 to n

#include<iostream>
using namespace std;

int main()
{
    // code by ALI
    int n,sum=0;
    cout<<"Enter the Number\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}