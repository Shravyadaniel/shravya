/*
The ternary operator is used in case of decision making when 
longer conditional statements like if and else exist. 
In simpler words, when we use an operator on three variables or operands, 
it is known as a Ternary Operator. We can represent it using ? : . 
Thus, it is also known as a conditional operator.

syntax for ternary operator is
testCondition ? expression1 : expression 2;*/
//ternary operator
#include <stdio.h>
int main()
{
    int marks;
    printf("enter marks\n");
    scanf("%d",&marks);
    (marks>=35)?(printf("pass")):(printf("Fail"));
    return 0;
}