/*
6. Write a program that asks the user for a number n and gives them the
possibility to choose between computing the sum and computing the product
of 1,...,n.
*/
#include<iostream>
using namespace std;

int main()
{
    // code by ALI
    int n,p,sum=0,mul=1;
    cout<<"Enter the Number \n";
    cin>>n;
    cout<<"Please Select the Option\n1.Additon\n2.Multiplication\n";
    cin>>p;
    if(p==1)
    {
        for(int j=1;j<=n;j++)
        {
            sum+=n;
        }
        cout<<"Sum = "<<sum<<endl;
    }
    else if(p==2)
    {
        for(int k=1;k<=n;k++)
        {
            mul*=k;
        }
        cout<<"Multiplication = "<<mul<<endl;
    }
   
    
    return 0;
}