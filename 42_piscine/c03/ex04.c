//#include <stdio.h>

int	subs(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i])
	{
		if (str[i] != to_find[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (subs(&str[i], to_find))
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "afinal avia outra";
	char	to_find[] = "avi";
	char	*result = ft_strstr(str, to_find);
		
	printf("String original: %s\n", str);
	if (result != NULL)
		printf("Substring encontrada: %s\n", result);
	else
		printf("Substring não encontrada.\n");
	return (0);
}*/
