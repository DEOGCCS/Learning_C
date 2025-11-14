#include <stdio.h>

char *ft_strlowcase(char *str)
{
  int  i;

  i = 0;
  while (str[i])
  {
    if (str[i] >= 'A' && str[i] <= 'Z')
    {
        str[i] = str[i] + ('a' - 'A'); //a=97 e A=65
    }
    i++;
  }
  return (str);
}

int  main()
{
  char str[] = "HELLO world";
  
  printf("Before: %s\n", str);
  ft_strlowcase(str);
  printf("Lower: %s\n", str);
  return (0);
}
