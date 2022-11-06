// 2- C Program to find sum of elements in a given array, also by a function.
// CODEWITHPRROFESSOR
#include<iostream>
using namespace std;
int main()
{
    int array[5]= {1,2,3,4,5};
    int sum =0;
    // Find the sum
    for(int i=0; i<5; i++)
    {
        sum = array[i]+ sum;
    }
    cout<<"The sum is "<<sum<<endl;
}