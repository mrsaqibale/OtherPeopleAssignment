#include<iostream>
using namespace std;

int main()
{
    float a,b,c,d,e,avg;
    cout<<"Enter the marks of the following Subjects\n";
    cout<<"Physics      : ";
    cin>>a;
     cout<<"Chemistry    : ";
    cin>>b;
     cout<<"Biology      : ";
    cin>>c;
     cout<<"Mathematics  : ";
    cin>>d;
     cout<<"Computer     : ";
    cin>>e;
    
    
    
    float sum=a+b+c+d+e;
    avg=(sum/500)*100;
    cout<<"Percenage = "<<avg<<endl;
    if(avg>=90)
    cout<<"Grade A"<<endl;

    else if(avg>=80)
    cout<<"Grade B"<<endl;

     else if(avg>=70)
    cout<<"Grade C"<<endl;

     else if(avg>=60)
    cout<<"Grade D"<<endl;

     else if(avg>=40)
    cout<<"Grade E"<<endl;

     else if(avg<40)
    cout<<"Grade F"<<endl;
    else 
    cout<<"Enter the Valid number";
    
    
    return 0;
}