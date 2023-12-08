//sum of n natural numbers using while loop
#include <stdio.h>
int main()
{
    int s,i=0,sum=0;
    printf("enter the number: ");
    scanf("%d",&s);
    while(i<=s)
    {
        sum=sum+i;
        i++;
    }
    printf("sum: %d",sum);
    return 0;

}