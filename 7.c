// C program to print Integer data types.
#include <stdio.h>

int main()
{
	// positive Integer value.
	int a = 9;

	// negative interger value.
	int b = -9;

	// U or u is Used for Unsigned int in C.
	int c = 77U;

	// L or l is used for long int in C.
	long int d = 33333L;

	printf("Positive Integer: %d\n", a);
	printf("Negative Integer: %d\n", b);
	printf("Integer value with an unsigned int data: %u\n",c);
	printf("Integer value with an long int data: %ld", d);

	return 0;
}
