/*#define
The #define preprocessor directive is used to define constant or micro substitution.
It can use any basic data type.
here we defined PI value*/

// program for finding radius of a circle//
#include <stdio.h>
// defining PI value globally//
#define PI 3.14
float area(float r);
main()
{
    float r;
    printf("enter the radius:\n");
    scanf("%f", &r);
    printf("the area of circle is:%f \n", area(r));
}
float area(float r)
{
    // formula for Area of a circle//
    return (PI * r * r);
}
