#include <stdio.h>

/**
 *main - prints the alphabet in lowercase
 *followed by a new line, except q and r
 *Return:Always 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
