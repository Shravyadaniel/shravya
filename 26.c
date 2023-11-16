/*
An array is a container object that holds a fixed number of values of a single type. \
The length of an array is established when the array is created. 
After creation, its length is fixed.
Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

To create an array, define the data type (like int) and specify the name of the array followed by square brackets [].

To insert values to it, use a comma-separated list, inside curly braces:

To access an array element, refer to its index number.
Array indexes start with 0: [0] is the first element. [1] is the second element, etc.

*/
//Program to print random number in Arrays
#include <stdio.h>
int main()
{
    int num[6]={3,7,11,15,19,26};
    printf("the output will be %d",num[3]);
    return 0;
}