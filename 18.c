/*Bitwise XOR ^
bit a	bit b	a ^ b (a XOR b)
0	0	0
0	1	1
1	0	1
1	1	0
The bitwise XOR (exclusive or) performs an exclusive disjunction,
which is equivalent to adding two bits and discarding the carry. 
The result is zero only when we have two zeroes or two ones. 
XOR can be used to toggle the bits between 1 and 0. 
Thus i = i ^ 1 when used in a loop toggles its values between 1 and 0.

      11001000  
    ^ 10111000 
      -------- 
    = 01110000

SHIFT OPERATORS:

    Right shift >>
The symbol of right shift operator is >>. For its operation, it requires two operands. 
It shifts each bit in its left operand to the right. 
The number following the operator decides the number of places the bits are shifted (i.e. the right operand).
 Thus by doing ch >> 3 all the bits will be shifted to the right by three places and so on.

 Left shift <<
The symbol of left shift operator is <<. 
It shifts each bit in its left-hand operand to the left by the number of positions indicated by 
the right-hand operand. It works opposite to that of right shift operator. 

Thus by doing ch << 1 in the above example (11100101) we have 11001010. 
Blank spaces generated are filled up by zeroes as above.
*/

//bitwise(^,>>,<<) operators
#include <stdio.h>
int main()
{
    int s,d;
    printf("enter the value of s\n");
    scanf("%d",&s);
    printf("enter the value of d\n");
    scanf("%d",&d);
    printf("s^d is %d\n",s^d);
    printf("s>>1 is %d\n",s>>1);
    printf("s<<1 is %d",s<<1);
    return 0;
}