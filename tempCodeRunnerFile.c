//program to find the factorial of a given number
#include <stdio.h>
int main()
{
    int i=1,n,product=1;
    printf("enter the number: ");
    scanf("%d",&n);
    {
        product=product*i;
        i++;
    }
    printf("the %d! is %d",n,product);
    return 0;
}