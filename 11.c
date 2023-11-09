/*
sizeof is a much-used operator in the C. 
It is a compile-time unary operator which can be used to compute the size of its operand.
The result of sizeof is of the unsigned integral type which is usually denoted by size_t. 
sizeof can be applied to any data type, including primitive types 
such as integer and floating-point types, pointer types, or compound datatypes 
such as Structure, union, etc.

Syntax:
sizeof(Expression);
where ‘Expression‘ can be a data type or a variable of any type.
Return: It returns the size size of the given expression.

Usage of sizeof() operator 
sizeof() operator is used in different ways according to the operand type. 

1. When the operand is a Data Type:
 When sizeof() is used with the data types such as int, float, char… etc 
 it simply returns the amount of memory allocated to that data types.

 2. When the operand is an expression: When sizeof() is used with the expression, 
 it returns the size of the expression. 
*/
//Program to demonstrate size of data type
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