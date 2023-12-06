//program to check whether the number is positive negative or zero
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num==0)
    {
        printf("%d is zero",num);
    }
    else if(num<0)
    {
        printf("%d is negative",num);
    }
    else
    {
        printf("%d is positive",num);0.
    }
    return 0;
}