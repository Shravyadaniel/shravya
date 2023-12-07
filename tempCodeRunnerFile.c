//program to print the string in the reverse order
//using while loop
#include <stdio.h>
int main()
{
    int i;
    printf("enter the number: ");
    scanf("%d",&i);
    while(i>=0)
    {
        printf("%d ",i);
        i--;
    }
    return 0;
}
    