//program to take and print 5 numbers in an array 
#include <stdio.h>
int main()
{
    int values[5],i;
    printf("enter the 5 values\n");
    for (i = 0; i < 5; ++i)
    {
        scanf("%d", &values[i]);
    }
    printf("the values are\n", values[i]);
    for (i = 0; i < 5; ++i)
    {
        printf("%d\n", values[i]);
    }
    return 0;
}