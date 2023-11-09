/*
/*#define
The #define preprocessor directive is used to define constant or micro substitution.
It can use any basic data type.
*/

//program for finding the perimeter of a rectangle//
#include <stdio.h>
int perimeter(int a,int b);
int main( )
{
    int a,b;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    printf("perimeter of a rectangle is:%d",perimeter(a,b));
}
int perimeter(int a,int b)
{
    //formula for perimeter of a rectangle
    return(2 * (a+b));
}
