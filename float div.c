/*In C programming, 
arithmetic operators are symbols used to perform basic mathematical operations on data. 
They can be divided into basic arithmetic operators and advanced arithmetic operators, 
such as modulus and increment/decrement operators.
The arithmetic operators help in performing mathematical functions
There are two types of Arithmetic Operators in C.
Binary
Unary

1.Binary Arithmetic Operators
This type of operator operates on two of the operands. 
A typical binary operator appears in this format with its operands:

syntax: operand1 operator operand2

2.Unary Arithmetic Operators
This type of operator operates only on one operand. 
A typical unary operator appears in the following format with its operand

syntax: operator operand
*/

//program on arithmetic operators//
 #include <stdio.h>
int main()
{
    int a;
    float b;
    printf("enter the value of a:\n");
    scanf("%d",&a);
    printf("enter the value of b:\n");
    scanf("%f",&b);
    printf("a+b=%f\n",a+b);
    printf("a-b=%f\n",a-b);
    printf("a*b=%f\n",a*b);
    printf("a/b=%f\n",a/b);
    return 0;
}