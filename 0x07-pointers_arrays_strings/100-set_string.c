#include "main.h"
/**
 * set_string - Function that sets the value of a pointer to char.
 * @s: Pointer to a pointer to char
 * @to: A pointer to char.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
