/*
A unary operator is an operator used to operate on a single operand to return a new value. 
In other words, it is an operator that updates the value of an operand or 
expression's value by using the appropriate unary operators. 
In Unary Operator, operators have equal priority from right to left side associativity.

Following are the types of the unary operators in the C programming language.

1.Unary Minus (-):
The Unary Minus operator is represented using the symbol (-). 
The unary operator is used to change the sign of any positive value to a negative value.
It means it changes the positive number to the negative, 
and a negative number becomes the positive number using the unary minus operator.

2.Unary Plus (+):
The unary plus operator is represented as the "+" symbol, and it does not change to the operand value.

3.Increment (++):
It is the unary increment operator, which is denoted by the "++" symbol. 
The "++" symbol represents the operand's value is increased by 1. 
It can be used in two ways, as the post-increment and the pre-increment.

3.a.Pre Increment: The pre-increment operator is represented as (++a), 
which means the value of variable 'a' is increment by 1 before using operand to the expression.

For example:
x = 10;  
A = ++x;  

3.b.Post Increment: The (a++) symbol represents the post-increment operator, 
which means the value of 'a' is incremented by 1 after assigning the original value to the expression 
or another variable.

For example:
x = 10;  
A = x++;  

4.Decrement (--):
The unary decrement operator is opposite to the unary increment operator. 
The Unary decrement operator is represented by the double minus (--) symbol, 
and it is used to decrease the operand value by 1 according to the decrement's types. 
The Unary decrement operator is of two types: the Pre decrement operator and the Post Decrement operator.

4.a.Pre Decrement: The pre decrement operator is denoted as (--a) symbol, 
meaning the operand value is decreased by 1 before assigning to another variable or expression.

4.b.Post Decrement: The Post decrement operator is denoted as (a--) symbol, 
which means the original value is decreased by 1 after assigning to another variable or expression.
*/
*/
// unary operator
#include <stdio.h>
int main()
{
    int a;
    printf("enter the value of a:");
    scanf("%d", &a);
    ++a;
    printf("the value of a after pre incement is %d\n", a);
    a++;
    printf("the value of a after post increment is %d\n",a);
    --a;
    printf("the value of a after pre decrement is %d\n",a);
    a--;
    printf("the value of a after post decrement is %d",a);
    return 0;

}
