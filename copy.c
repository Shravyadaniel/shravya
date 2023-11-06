
#include <stdio.h>
int main()
{
    float a;
    float b;
    printf("enter the value of a:\n");
    scanf("%f", &a);
    printf("enter the value of b:\n");
    scanf("%f", &b);
printf("a+b is %f  and a-b is %f \n (a+b)+(a-b) is %f",a+b,a-b,(a+b)+(a-b));
    return 0;
}