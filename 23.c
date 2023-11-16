//volume of a cylinder using hard coded inputs
/*Here is the program to find the volume of a cylinder by pre defined inputs.
Initially assigned the value to PI.
and, the formula for volume of a cylinder is PI*radius*radius*height 
*/
#include <stdio.h>
int main()
{
    float PI=3.14;
    float radius=3;
    float height=7;
    float volume;
    volume=PI*radius*radius*height;
    printf("The radius of a cylinder is %f\n",radius);
    printf("The height of a cylinder is %f\n",height);
    printf("the volume of a cylinder is %f",volume);
    return 0;
}