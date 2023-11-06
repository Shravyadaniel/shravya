#include <stdio.h>
int main()
{
    int dividend,divisor,quotient,reminder;
    printf("enter the dividend :");
    scanf("%d", &dividend);
    printf("enter the divisor :");
    scanf("%d",&divisor);
    quotient=dividend/divisor;
    reminder=dividend%divisor;
    printf("the quotient id %d\n",quotient);
    printf("the reminder is %d",reminder);
    return 0;
}

