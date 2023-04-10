#ifndef _MAIN_H_ /* Preprocessor directive to avoid multiple inclusion of the header file*/
#define _MAIN_H_ /*Preprocessor directive to define _MAIN_H_ as a token for the multiple inclusion guard.*/


#include <stdio.h> /*Header file inclusion for standard input/output library functions*/
#include <stdlib.h> /*Header file inclusion for standard library functions such as memory allocation and conversion functions.*/
#include <string.h> /*Header file inclusion for string manipulation functions*/


int _putchar(char c); /*Function prototype for a custom _putchar function that outputs a single character to stdout.*/
unsigned int binary_to_uint(const char *b); /*Function prototype for a function that converts a binary string to an unsigned integer.*/
void print_binary(unsigned long int n); /*Function prototype for a function that prints the binary representation of an unsigned long integer*/
int get_bit(unsigned long int n, unsigned int index); /*Function prototype for a function that gets the value of a bit at a specified index of an unsigned long integer*/
int set_bit(unsigned long int *n, unsigned int index); /*Function prototype for a function that sets a bit at a specified index of an unsigned long integer to 1*/
int clear_bit(unsigned long int *n, unsigned int index); /*Function prototype for a function that sets a bit at a specified index of an unsigned long integer to 0*/
unsigned int flip_bits(unsigned long int n, unsigned long int m); /*Function prototype for a function that returns the number of bits needed to be flipped to convert one unsigned long integer to another*/


#endif
