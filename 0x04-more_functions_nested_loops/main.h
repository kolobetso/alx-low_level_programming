#ifndef  MAIN_H
#define MAIN_H

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 * Return: 1 if true, 0 if false  
 */

int _isupper(int c);

/**                                                                                                                                                                                      
 *_isdigit - checks for a digit 0 through 9
 * @c:digit to checked                                                                                                                                                           
 * Return: 1 if true, 0 if false                                                                                                                                                         
 */  
int _isdigit(int c);

/**
 * mul - multiplies two integers
 *@a: one integer
 *@b: second integer
 *Return: product of a and b
 */
int mul(int a, int b);

/**
 * print_numbers - print 0 to 9
 */
void print_numbers(void);

/*
 *print_most_numbers - print 0 to 9, skip 2 and 4
 */
void print_most_numbers(void);

#endif
