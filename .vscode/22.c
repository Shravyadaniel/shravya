// volume of the cylinder
#include <stdio.h>
#define PI 3.14
float volume(float radius, float height);
int main()
{
    float radius;
    float height;
    printf("radius of a cylinder is\n");
    scanf("%f", &radius);
    printf("height of a cylinder is \n");
    scanf("%f", &height);
    printf("The volume of a cylinder is %f", volume(radius,height));
}
float volume(float radius, float height)
{
    return (PI * radius * radius * height);
}