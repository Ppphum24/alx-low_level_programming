#include <unistd.h>
/**
 * _puchar - writes the character c to stdout
 * @c: The character to print
 * Return: Success 1.
 * On errror, -1 is returned, and errno s set appropriately.
 */
int _putchar(char c)
{
 	return (write(1,&c, 1));
}
