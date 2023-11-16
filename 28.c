/*
An array is a single variable used to store elements of different datatypes so that
 they can be accessed through a single variable.

 What are Loops?
A loop is a type of computer program that allows us to repeat a specific operation a predetermined
-number of times without having to write that operation individually.

For example, if we have an array and want to output each element in the array,
rather than using the index number to do so one by one,
we can simply loop through and perform this operation once.
*/
// program to print an Array using for loop
#include <stdio.h>
int main()
{
    printf("The marks in telugu ,hindi,english,math,science and social respectively are\n");
    int marks[] = {77, 83, 92, 88, 86, 90};
    int i;
    for (i = 0; i < 6; i++)
    {
        printf("%d\n", marks[i]);
    }
    return 0;
}