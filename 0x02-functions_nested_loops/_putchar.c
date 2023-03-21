#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The charachter to print 
 * Return: On succes 1.
 * on error, -1 is returned, and errno is set appropiately.
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
