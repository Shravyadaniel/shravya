/*
Bitwise AND &
bit a	bit b	a & b (a AND b)
0	0	0
0	1	0
1	0	0
1	1	1
The bitwise AND operator is a single ampersand: &. 
It is just a representation of AND which does its work on the bits of the operands 
rather than the truth value of the operands. 
Bitwise binary AND performs logical conjunction (shown in the table above) of the bits 
in each position of a number in its binary form.

Bitwise OR |
bit a	bit b	a | b (a OR b)
0	0	0
0	1	1
1	0	1
1	1	1
Similar to bitwise AND, bitwise OR performs logical disjunction at the bit level. 
Its result is a 1 if either of the bits is 1 and zero only when both bits are 0. 
Its symbol is | which can be called a pipe.

      11001000  
    | 10111000 
      -------- 
    = 11111000
*/
// bitwise And and bitwise OR 
#include <stdio.h>
int main()
{
    int a,b;
    printf ("enter the value of a:\n");
    scanf("%d",&a);
    printf("enter the value of b:\n");
    scanf("%d",&b);
    printf("a&b is %d\n",a&b);
    printf("a|b is %d\n",a|b);
    return 0;
}