// Program to calculate area of a rectangle(using inputs supplied by the user)
/*Here in this program we are finding the area of rectangle by proving inputs at runtime.
 Formula for area of rectangle is length * breadth  */
#include <stdio.h>
int area(int length, int breadth);
int main()
{
    int length;
    int breadth;
    printf("enter length\n");
    scanf("%d", &length);
    printf("enter breadth\n");
    scanf("%d", &breadth);
    printf("The area of rectangle is %d", area(length, breadth));
}
int area(int length, int breadth)
{
    return (length * breadth);
}