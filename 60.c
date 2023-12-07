//program to print 10 multiples when certain number is given at run time
//using while loop
#include <stdio.h>
int main()
{
    int i=0;
    int s;
    printf("enter the number: ");
    scanf("%d",&s);
    while(i<=s)
    {
        printf("%d ",i);
        i=i+10;
    }
    return 0;
}