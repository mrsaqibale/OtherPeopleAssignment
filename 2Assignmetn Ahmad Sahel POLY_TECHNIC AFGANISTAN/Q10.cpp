// 10- Write a C++ program to find the most occurring element in an array
// of integers
// CODEWITHPROFESSOR
#include<iostream>
using namespace std;
int main()
{
    int array[5]= {5,3,3,3,5}, count=0, fCount=0, j;
    cout<<"Array Elements are\n";
    for(int i=0; i<5; i++)
    {
        for(int j =0; j<5; j++)
        {
            if(array[i] == array[j])
            {
                count++;
            }
        }
        if(fCount < count)
        {   
            fCount = count;
            j = i;
        }
        count =0;
    }
    cout<<"Most occuring element is "<<array[j];
}