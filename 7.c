
/*INTEGER datatype
In the C programming language,
the keyword 'int' is used in a type declaration to give a variable an integer type.
However, the fact that the type represents integers does not mean it can represent all integers.
Integers are entire numbers without any fractional or decimal parts,
and the int data type is used to represent them.
It is frequently applied to variables that include values,
such as counts, indices, or other numerical numbers.
The int data type may represent both positive and negative numbers because it is signed by default.
The size of an int variable is fixed and determined by the C implementation you use.
It can be divided into 4types

short int
Range:-32,768 to 32,767
size: 2 bytes
Format Specifier: %hd

unsigned short int
Range: 0 to 65,535
size: 2 bytes
Format Specifier: %hu

unsigned int
Range: 0 to 4,294,967,295
size: 4 bytes
Format Specifier: %u


int
Range:-2,147,483,648 to 2,147,483,647
size: 4 bytes
Format Specifier: %d*/


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
