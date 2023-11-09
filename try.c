/*
Arithmetic Operators are the type of operators in C that are used to perform 
mathematical operations in a C program. They can be used in programs to define 
expressions and mathematical formule.

+   Adds two operands.	ex:A + B = 30
−	Subtracts second operand from the first.	ex:A − B = -10
*	Multiplies both operands.	ex:A * B = 200
/	Divides numerator by de-numerator.	ex:B / A = 2
%	Modulus Operator and remainder of after an integer division.	ex:B % A = 0
*/

//program to demonstrate arithmetic operator using int data type
#include <stdio.h>
int main()
{
    int a=7;
    int d=7;
    printf("the value of a is %d \n",a);
    printf("the value of d is %d \n",d);
    printf("sum of a and d is %d \n",a+d);
    printf("difference of a and d is %d",a-d);
    return 0;
}