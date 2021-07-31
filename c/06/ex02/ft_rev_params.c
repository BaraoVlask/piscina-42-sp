#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int pos;

	if (argc > 1)
	{
		pos = (argc - 1);
		while (pos > 0)
		{
			ft_putstr(argv[pos]);
			ft_putchar('\n');
			pos--;
		}
	}
	return (0);
}
