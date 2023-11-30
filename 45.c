//program to compare two numbers
#include <stdio.h>
int main()
{
    int a,b;
    printf("enter two integers: ");
    scanf("%d %d",&a,&b);
    if(a==b)
    {
        printf(" %d = %d",a,b);
    }
    else if(a<b)
    {
        printf("%d < %d",a,b);
    }
    else
    {
        printf(" %d > %d",a,b);
    }
    return 0;
}