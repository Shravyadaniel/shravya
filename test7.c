//program of swaping two numbers
#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the value of a: ");
    scanf("%d",&a);
    printf("enter the value of b: ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("numbers after swaping are %d,%d",a,b);
    return 0;
}