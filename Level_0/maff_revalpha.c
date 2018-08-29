#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	int letter = 90;
	while (letter >= 65)
	{
		if (letter % 2 == 0)
			ft_putchar(letter + 32);
		else
			ft_putchar(letter);
		letter--;
	}
	ft_putchar('\n');
}
