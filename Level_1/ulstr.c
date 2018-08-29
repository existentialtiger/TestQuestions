#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int i;
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	i = 0;
	while (av[1][i])
	{
		if (av[1][i] >= 65 && av[1][i] <= 90)
			ft_putchar(av[1][i] + 32);
		else if (av[1][i] >= 97 && av[1][i] <= 122)
			ft_putchar(av[1][i] - 32);
		else
			ft_putchar(av[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
