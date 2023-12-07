//program to print multiples of 10-method 1
//using while loop
#include <stdio.h>
int main()
{
    int i=1;
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    while(i<=a)
    {
        printf("%d ",i*10);
        i++;
    }
    return 0;
}