//program to print n numbers
//using while loop
#include <stdio.h>
int main()
{
    int i=0;
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    while(i<a)
    {
        printf("%d ",i+1);
        i++;
    }
    return 0;
}