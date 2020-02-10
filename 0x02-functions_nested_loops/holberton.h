#ifndef HOLBERTON
#define HOLBERTON

#include <unistd.h> /*Add this library*/

/*_putchar - Displays a character*/
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

#endif
