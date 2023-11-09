/*
These types of operators check the relationship between two of the available operands.
In case the relation happens to be true, then it returns to 1.
But in case this relation turns out to be false, then it returns to the value 0.
We use the relational operators in loops and in the cases of decision making.
There are six main relational operators in C:

Equal to Operator (==)
Not Equal to Operator (!=)
Less than Operator (<)
Greater than Operator (>)
Less than or Equal to Operator (<=)
Greater than or Equal to Operator (>=)

*/
//example program to demonstrate relational operator
#include <stdio.h>
int main ()
{
    int x;
    int y=7;
    int z=3;
    x=y==z;
    printf("the value of x is %d",x);
    return 0;
}