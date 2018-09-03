#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int i = 0;
	if (ac != 2)
	{
		ft_putchar('a');
		ft_putchar('\n');
		return (0);
	}
	while (av[1][i] != '\0')
	{
		if (av[1][i] == 'a')
		{
			ft_putchar('a');
			ft_putchar('\n');
			return(0);
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}
