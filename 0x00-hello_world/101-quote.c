#include <unistd.h>


/**
 * main - prints "and that pieceof art is usefull" - Dora korpar, 2015-10-19
 * followed by a newline, to standard error
 * Return: Alway 1.
 */


int main(void)

{
	write(2, "and that piece of art is useful\" - Dora korpar, 2015-10-19", 59);
	return (1);
}
