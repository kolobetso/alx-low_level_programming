#ifndef _MAIN_H_
#define _MAIN_H_
/**
*putchar - writes the character c to stdout
*@c: The character to print
*
*Return: On success 1.
*On error, -1 is returned, and error is set appropriately
*/

int _putchar(char c);

/**                                                                                                                                              
 *print_alphabet - print lowercase alphabet                                                                                                                               
 */
void print_alphabet(void);


/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 */
void print_alphabet_x10(void);

/**
 * checks for lowercase character.
 */
int _islower(int c);
/**
 * checks for alphabetic character.
 */
int _isalpha(int c);

/**
 *function that prints the sign of a number.
 */
int print_sign(int n);
/**
 *  function that computes the absolute value of an integer.
 */
int _abs(int);

/**
 * printing the last digit
 */
int print_last_digit(int);

#endif
