// program to print odd numbers using while loop
#include <stdio.h>
int main()
{
    int i = 1;
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("Odd numbers from 1 to are %d: \n", n);
    while (i <= n)
    {
        if (i % 2 != 0)
            printf("%d ", i);
        i++;
    }
    return 0;
}