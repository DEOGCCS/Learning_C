#include <stdio.h>

int  ft_strlen(char *str)
{
  int  i;
  i = 0;
  while (str[i] != '\0')
  {
    i++;
  }
  return (i);
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
  unsigned  i;
  unsigned  j;
  
  i = ft_strlen(dest);
  j = 0;
  while (j < nb && src[j] != '\0')
{
    dest[i] = src[j];
    i++;
    j++;
}
dest[i] = '\0';
return (dest);
}

int   main(void)
{
  char  dest1[20] = "good ";
  char  dest2[20] = "good ";
  char  dest3[20] = "good ";
  char src[] = "morning";
  
  printf("%s\n", ft_strncat(dest1, src, 3));
  printf("%s\n", ft_strncat(dest2, src, 5));
  printf("%s\n", ft_strncat(dest3, src, 10));
  return (0);
}
