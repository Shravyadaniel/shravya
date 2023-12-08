//program to find sum of first 10 natural numbers using for loop
#include <stdio.h>
int main()
{
    int i=0,sum=0;
    for(i=0;i<=10;i++)
    {
        sum=sum+i;
        i++;
    }
    printf("the sum is %d",sum);
    return 0;
}