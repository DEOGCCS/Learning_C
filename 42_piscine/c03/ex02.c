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

char *ft_strcat(char *dest, char *src)
{
  int  i;
  int  j;
  
  i = ft_strlen(dest);
  j = 0;
  while (src[j] != '\0')
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
  char dest[20] = "hello";
  char src[] = "world";
  
  printf("%s\n", dest);
  printf("%s\n", src);
  
  ft_strcat(dest, src);
  printf("%s\n", dest);
  return (0);
}
