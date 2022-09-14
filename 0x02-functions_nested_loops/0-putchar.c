#include "main.h"

/**
 * main - Entry point without using printf and put
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char item[] = "-putchar";
	int i = 0;

	while (item[i] != '\0')

	{
		_putchar(item[i]);
		i++
	}
	_putchar('\n');

	return (0);
}
