/*There are many methods for swaping numbers
one of these is using third variable method and below are the steps.

 Method : Swapping Two Numbers in C Using Third Variable Logic
Assign var1 value to a temp variable: temp = var1.
Assign var2 value to var1: var1 = var2.
Assign temp value to var2: var2 = temp.
*/

//program for swaping numbers
#include<stdio.h>
int main()
{
    int first,second,temp;
    printf("enter the first number:");
    scanf("%d",&first);
    printf("enter the second number:");
    scanf("%d",&second);
    temp=first;
    first=second;
    second=temp;
    printf("after swaping first number is %d\n",first);
    printf("after swaping second number is %d",second);
    return 0;
}