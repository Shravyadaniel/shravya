#include <stdio.h>
int main()
{
    int sareeprice;
    int finalbill;
    int discount;
    printf("enter the price of a saree: ");
    scanf("%d", &sareeprice);
    if (sareeprice >= 3000)
    {
        discount = sareeprice - sareeprice * 10/100;
        finalbill  = sareeprice - discount;
        printf("the price after discount is %d", finalbill);
    }
    else{
        printf("the price of a saree is %d",sareeprice);
    }
    return 0;
}