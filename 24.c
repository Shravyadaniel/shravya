// program to convert centigrade to fahrenheit
/*
here is the program to convert centigrade to fahrenheit by providing user inputs.
 and the formula is fahrenheit =celsius*9/5+32;
*/
#include <stdio.h>
int main()
{
    float celsius;
    float fahrenheit;
    printf("the temperature in centigrades is \n");
    scanf("%f", &celsius);
    fahrenheit =celsius*9/5+32;
    printf("the temperature in fahrenheit is %f", fahrenheit);
    return 0;
}