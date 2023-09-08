// 8. Write a program that prints all prime numbers. (Note: if your programming
// language does not support arbitrary size numbers, printing all primes up to
// the largest number you can easily represent is fine too.)
#include<iostream>
using namespace std;

int main()
{
    // code by ALI
    int n,cunt;
    cout<<"Enter the Value\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cunt=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                cunt++;
            }
          
        }
         if(cunt==2)
        cout<<i<<endl;
    }
    return 0;
}