/*
#include <stdio.h>
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main()
{
	char src[] = "hello";
	char dest[10];

	printf("Scroce: '%s'\n", src);
	ft_strncpy(dest, src, 8);
	printf("Destination: '%s'\n", dest);

	 return 0;
}*/
