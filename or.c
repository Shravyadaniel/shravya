
#include <stdio.h>
int main ()
{
    int a,b;
    printf("enter the value of a:\n",a);
    scanf("%d",&a);
    printf("enter the value of b:\n",b);
    scanf("%d",&b);
    printf("a>b || a<b is %d\n",((a>b) || (a<b)));
    return 0;
}