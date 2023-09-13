#include "main.h"
/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line.
 */
void print_alphabet(void)
{
char letters = 'a';

while (letters <= 'z')
{
_putchar(letters);
letters++;
}
_putchar('\n');
}
