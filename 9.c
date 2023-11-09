/*
loat data type
Float is a shortened term for "floating point." 
By definition, it's a fundamental data type built into the compiler 
that's used to define numeric values with floating decimal points.
The float type is usually used for variables that require very good precision 
but may not be very precise.
It can store values with an accuracy of about 6 decimal places and 
a range of about 3.4 x 1038 in 4 bytes of memory. 
It is divided into three types

float
Range:1.2E-38 to 3.4E+38
size: 4 bytes
Format Specifier: %f

double:
Range:1.7E-308 to 1.7E+308
size: 8 bytes
Format Specifier: %lf

long double:
Range:3.4E-4932 to 1.1E+4932
size: 16 bytes
Format Specifier: %Lf
*/
//program to print floating value
#include <stdio.h>
int main()
{
    float a = 7.2;
    float b = 3.8;
    //where 2E-3 = 2x10^-3
    float c =2E-3;
    printf("a value:%f\n",a);
    printf("b value:%f\n",b);
    printf("the value of c is %f",c);
    return 0;
}