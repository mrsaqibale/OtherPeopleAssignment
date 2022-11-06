// 9- Write a C++ program to find the largest three elements in an array.
// CODEWITHPROFESSOR
#include<iostream>
using namespace std;
int main()
{
    int array[5]= {1,8,9,4,5};
    // Find the Maximum numbers
    for(int i=1; i<5; i++)
    {
        for(int j=i; j<5; j++)
        {
            if(array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp; 
            }
        }
    }
    for(int i=4; i >= 2; i--)
    {
        cout<<array[i];
    }
}