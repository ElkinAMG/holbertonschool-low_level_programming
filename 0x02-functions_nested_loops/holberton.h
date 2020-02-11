#ifndef HOLBERTON
#define HOLBERTON

#include <unistd.h> /*Add this library*/

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/*print_alphabet - Displays the alphabet*/
void print_alphabet(void);

/*print_alphabet_x10 - Displays the alphabet 10 times*/
void print_alphabet_x10(void);

/*return 1 if the letter is lowercase || 0 if is otherwise*/
int _islower(int c);

/*return 1 if the letter is lower or upper case || 0 if is otherwise*/
int _isalpha(int c);

/*sign of number*/
int print_sign(int n);

/*absolute value*/
int _abs(int);

/*Displays last digit of numbers*/
int print_last_digit(int);

/*Displays minutes with Jack Bauer*/
void jack_bauer(void);

/*Displays 9 table*/
void times_table(void);

/*Adds two integers*/
int add(int, int);

/*print numbers from n to 98*/
void print_to_98(int n);

#endif
