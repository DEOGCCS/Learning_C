//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	number;
	int	signal;

	i = 0;
	number = 0;
	signal = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			signal = signal * -1;
		str++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (signal * number);
}
/*
int	main(void)
{
	printf("Resultado 1: %d\n", ft_atoi("42"));
	printf("Resultado 2: %d\n", ft_atoi("   123"));
	printf("Resultado 3: %d\n", ft_atoi("-42"));
	printf("Resultado 4: %d\n", ft_atoi("--42"));
	printf("Resultado 5: %d\n", ft_atoi("+-42"));
	printf("Resultado 6: %d\n", ft_atoi("  -00123abc"));
	printf("Resultado 7: %d\n", ft_atoi("   +42"));
	printf("Resultado 8: %d\n", ft_atoi("  ---+--+123"));
	printf("Resultado 9: %d\n", ft_atoi("abc"));
	
	return 0;
}*/
