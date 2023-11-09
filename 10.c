/*
A double is a data type in C language that stores high-precision floating-point data 
or numbers in computer memory. It is called double data type because 
it can hold the double size of data compared to the float data type. 
A double has 8 bytes, which is equal to 64 bits in size. In double data type, 
the 1 bit for sign representation, 11 bits for the exponent and 
the remaining 52 bits used for the mantissa. The range of double is 1.7E-308 to 1.7E+308. 
Double data can be represents in real number (1, 10), decimals (0.1, 11.002) and minus (-1, -0.00002). 
It can hold approximately 15 to 16 digits before and after the decimal point.

For example, 4.5672, 2.45354, -5.22234, 3.12345678901, 0.15197e-7 etc.
*/
//program for double data type
#include <stdio.h>
int main()
{
    double a,b;
    printf("enter the value of a\n");
    scanf("%lf",&a);
    printf("enter the value of b \n");
    scanf("%lf",&b);
    return 0;
}