// 3- C program to find largest element in an array, also by a function.
// CODEWITHPRROFESSOR
#include<iostream>
using namespace std;
int Maximum()
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
    return max;
}
int main()
{
    int max = Maximum();
    cout<<"The Maximum number is "<<max<<endl;
}