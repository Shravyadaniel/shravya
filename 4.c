/*ASSIGNMENT OPERATOR
We use this type of operator to transform as well as assign the values
to any variable in an operation. In any given assignment operator,
the right side is a value, and the left side is a variable.
The value present on the right side of the operator must have the same data type
as that of the variable present on the left side. In any other case, the compiler raises an error.

Here is a list of the assignment operators that you can find in the C language:

1.basic assignment ( = ) :
This is the simplest assignment operator.
This operator is used to assign the value on the right to the variable on the left.
Example:a = 10;

2.subtraction assignment ( -= ):
This operator is a combination of ‘-‘ and ‘=’ operators.
 This operator first subtracts the value on the right from the current value of the variable
 on left and then assigns the result to the variable on the left.
Example:
(a -= b) can be written as (a = a - b)
If initially value stored in a is 8. Then (a -= 6) = 2.

3.addition assignment ( += ):
This operator is the combination of the ‘+’ and ‘=’ operators.
 This operator first adds the current value of the variable on left to the value on the right
 and then assigns the result to the variable on the left.
Example:
(a += b) can be written as (a = a + b)
If initially value stored in a is 5. Then (a += 6) = 11.

4.division assignment ( /= ):
This operator is a combination of the ‘/’ and ‘=’ operators.
This operator first divides the current value of the variable on left
by the value on the right and then assigns the result to the variable on the left.
Example:
(a /= b) can be written as (a = a / b)
If initially, the value stored in a is 6. Then (a /= 2) = 3.

5.multiplication assignment ( *= ):
This operator is a combination of the ‘*’ and ‘=’ operators.
This operator first multiplies the current value of the variable on left
to the value on the right and then assigns the result to the variable on the left.
Example:
(a *= b) can be written as (a = a * b)
If initially, the value stored in a is 5. Then (a *= 6) = 30.

6.modulo assignment ( %= ):
This operator is a combination of the ‘%’ and ‘=’ operators.

Example:

(a *= b) can be written as (a = a % b)
*/
// Program on assignment operators
#include <stdio.h>
int main()
{
    int n;   // integer variable
    char ch; // character variable
    float f; // float variable

    // Simple assignment operator to assign values to variables
    n = 7;
    ch = 'J';
    f = 33.465f;
    // Displaying the values of all the variables
    printf("The value assigned to 'n': %d", n);
    printf("The value assigned to 'ch': %c\n ", ch);
    printf("The value assigned to 'f': %f\n ", f);
    int x = 100;
    x += 10;
    printf("Value of variable x: %d\n", x);
    x -= 50;
    printf("Value of variable x: %d\n", x);
    x *= 2;
    printf("Value of variable x: %d\n", x);
    int y = 10;
    printf("Quotient of x/y : %d\n", x / y);
    printf("Reminder of x/y : %d", x % y);
    return 0;
}