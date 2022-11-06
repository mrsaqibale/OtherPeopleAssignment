// 6- Write a C++ program to find and print all repeated elements of a given
// array of integers
// CODEWITHPRROFESSOR
#include<iostream>
using namespace std;
int main()
{
    int array[5]= {5,3,3,4,5}, count=0;
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
        if(count ==2)
            cout<<array[i];
        count =0;
    }
}