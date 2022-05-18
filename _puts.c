#include "main.h"

/**
 * _puts - prints a string
 * @str: pointer to the first char in the string
 *
 * Return: void
 */
void _puts(char *str)
{
	if (str == NULL || *str == '\0')
		return;
	write(STDOUT_FILENO, str, _strlen(str));
}
