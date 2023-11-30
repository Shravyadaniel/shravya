#include <stdio.h>
int main()
{
    int length,breadth,area,perimeter;
    printf("length of a rectangle is\n");
    scanf("%d",&length);
    printf("breadth of a rectangle is\n");
    scanf("%d",&breadth);
    area=length*breadth;
    printf("area of a rectangle is %d\n",area);
    perimeter=2*(length+breadth);
    printf("perimeter of a rectangle is %d",perimeter);
    return 0;
}