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

#include <stdio.h>
int main()
{
    float a;
    float b;
    printf("enter the value of a:\n");
    scanf("%f", &a);
    printf("enter the value of b:\n");
    scanf("%f", &b);
    printf("a+b= %f + a-b= %f is %f\n", (a + b) , (a - b),(a+b)+(a-b));
    printf("a*b= %f + a/b= %f is %f\n", (a * b),(a / b),(a * b) + (a / b));
    return 0;
}