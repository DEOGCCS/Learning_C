#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write (1, str, i);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	if (argc > 1)
	{
		while ((i < argc) && (i > 0))
		{
			ft_putstr(argv[i]);
			write (1, "\n", 1);
			i--;
		}
	}
	return (0);
}
