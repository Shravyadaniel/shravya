/*The logical operators evaluate the logical expression and return a result.
The result is always a Boolean value.
A Boolean value determines whether the expression is true or false .
There are three logical operators in C programming:
 logical AND( && ), logical OR( || ), and logical NOT ( ! ).
 */
// Program on logical operator
#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the value of a:\n", a);
    scanf("%d", &a);
    printf("enter the value of b:\n", b);
    scanf("%d", &b);
    printf("a>b && a<b is %d\n", ((a > b) && (a < b)));
    printf("a>b || a<b is %d\n", ((a > b) || (a < b)));
    printf("!(a<b) is %d", (!(a < b)));
    return 0;
}