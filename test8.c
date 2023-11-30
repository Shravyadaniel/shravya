#include <stdio.h>
int main()
{
    int sizeofint = sizeof(int);
    int sizeoffloat = sizeof(float);
    int sizeofdouble = sizeof(double);
    int sizeofchar = sizeof(char);
    printf("the size of int is %d\n", sizeofint);
    printf("the size of float is %d\n", sizeoffloat);
    printf("the size of double is %d\n", sizeofdouble);
    printf("the size of char is %d\n", sizeofchar);
    return 0;
}
