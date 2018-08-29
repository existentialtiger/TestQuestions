#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int len = ft_strlen(str);
	write(1, str, len);
}

int		cmp_str(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	while (s2[j] && s1[i])
	{
		if (s2[j] == s1[i])
			i++;
		j++;
	}
	if (!s1[i])
		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	if (cmp_str(av[1], av[2]))
		ft_putstr(av[1]);
	ft_putchar('\n');
	return (0);
}
