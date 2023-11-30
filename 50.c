//program to find the largest using if else statement
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    //implementing conditions to find the largest number
    if(a>=b && a>=c)
    {
        printf("the largest number is %d",a);
    }
    else if(b>=a && b>=c)
    {
        printf("the largest number is %d",b);
    }
    else
    {
        printf("the largest number is %d",c);
    }
    return 0;
}
