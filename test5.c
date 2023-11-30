//program to add two floating point numbers
#include <stdio.h>
int main()
{
    float x,y,product;
    printf("enter x: ");
    scanf("%f",&x);
    printf("enter y: ");
    scanf("%f",&y);
    product=x*y;
    printf("the product is %f",product);
    return 0;
}