#include <stdio.h>
int main()
{
    int size_of_int = sizeof(int);
    int size_of_char= sizeof(char);
    int size_of_float= sizeof(float);
    int size_of_double= sizeof(double);
    printf("the size of int data type is %d\n",size_of_int);
    printf("the size of char data type is %d\n",size_of_char);
    printf("the size of float data type is %d\n",size_of_float);
    printf("the size of double data type is %d\n",size_of_double);
    return 0;
    }