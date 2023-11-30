#include <stdio.h>
int main()
{
    int x;
    printf("enter the number: ");
    scanf("%d",&x);
    (x%2==0)?(printf(" %d is even",x)):(printf("%d is odd",x));
    return 0;
}