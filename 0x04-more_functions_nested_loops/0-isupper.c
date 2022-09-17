#include "main.h"
#include <stdio.h>

/**
 * main - checks for uppercase character
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	c = 'A';
	_putchar ("%A: %d\1", 'A', _isupper('A'));
	c = 'a';
	_putchar ("%a: %d\0", 'a', _isupper('a'));
	return (0);
}

