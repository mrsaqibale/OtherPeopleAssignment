// 8- Write a C++ program to find the largest element of a given array of
// integers
// CODEWITHPROFESSOR
#include<iostream>
using namespace std;
int main()
{
    int array[5]= {1,8,9,4,5};
    int max;
    // Find the Maximum number
    max = array[0];
    for(int i=1; i<5; i++)
    {
        if(max < array[i])
        {
            max = array[i];
        }
    }
    cout<<"The Maximum number is "<<max<<endl;
}