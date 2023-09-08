#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Etner the 3 sides of the Triangle\n";
    cin>>a>>b>>c;
    if( a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b)
    cout<<"Its a Right Triangle "<<endl;
    else 
    cout<<"It is not Right Triangle \n";
    return 0;
}