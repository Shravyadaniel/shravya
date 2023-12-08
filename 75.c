//program to calculate the sum of the numbers occuring in 8 table(from 8x1 to 8x10)
#include <stdio.h>
int main()
{
    int i=1,sum=0;
    while(i<=10)
    {
        sum=sum+8*i;
        i++;
    }
    printf("the sum of first ten 8 multiples is %d",sum);
    return 0;
}