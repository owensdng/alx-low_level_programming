#include <unistd.h>

/**
 * _putchar - Outputs a character to the standard output (stdout).
 * @c: The character to be printed.
 *
 * Return: On success, 1 is returned. On error, -1 is returned and errno is set.
 */
int _putchar(char c)
{
  return write(1, &c, 1);
}
