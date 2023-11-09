/*
INTEGER datatype
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
Format Specifier: %d

syntax of int:
 The integer data type in c is represented by the 'int' keyword

 int var_name;

2.CHARACTER datatype
 It is the most basic data type in C.
Character data type allows its variable to store only a single character.
There are 256 characters that can be represented by a single char, which takes up one byte of memory.
The size of the character is 1 byte.
It stores a single character and requires a single byte of memory in almost all compilers.
Characters such as 'A', 'b', '5', or '$' are enclosed in single quotes.
It can be divided into two types.

signed char
Range : -128 to 127
size : 1 byte
Format specifier: %c

unsigned char
Range: 0 to 255
Format specifier: %c

syntax of char:
The integer data type in c is represented by the 'char' keyword

char var_name; 

*/

// Program to add number and character
#include <stdio.h>
int main()
{
    int a;
    char c, sum;
    a = 7;
    c = 's';
    sum = a + c;
    printf("the value of a is %d \n", a);
    printf("the value of c is %c \n", c);
    printf("sum of a and c is %c \n", a + c);
    return 0;
}