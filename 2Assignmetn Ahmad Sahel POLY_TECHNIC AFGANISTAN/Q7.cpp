// 7- Write a program that reverses a string and prints it on the screen.
// CODEWITHPROFESSOR
#include<iostream>
#include<string>
using namespace std;
int main()
{
   string ali={"Hello Ali"};
   int i=0, count =0;
   while(ali[i] != 0)
   {
        i++;
   } 
   do
   {
        cout<<ali[i--];
   }while(i != -1);

}