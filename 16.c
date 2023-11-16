/*
Unary operator
In the C programming language, 
a unary operator is a single operator that operates on a single operand to produce a new value. 
The unary operator in C has right to left associativity. 
All unary operators have equal precedence in C. 
Unary operators can perform operations such as negation, increment, decrement, and others.

For example, the negation operator (-) negates the value of its operand, 
while the increment operator (++) adds 1 to its operand. 
Unary operators can be used to modify variables, perform arithmetic operations, 
or control the flow of execution.

Types of Unary Operators in C

The types of Unary Operators are as follows

Unary plus (+) Operator
Unary minus (-) Operator
Increment (++) Operator
Decrement (--) Operator
Address of (&) Operator in C
sizeof() Operator
Dereferencing (*) Operator
Logical NOT (!) Operator
Bitwise NOT (~) Operator*/
//unary minus operator
#include <stdio.h>
int main()
{
int positivenumber;
printf("enter the positive number:\n");
scanf("%d",&positivenumber);
int negativenumber = -positivenumber;
printf("the negative number is %d", negativenumber);
return 0;
}