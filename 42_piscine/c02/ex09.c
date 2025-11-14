#include <stdio.h>

char  *ft_strcapitalize(char *str)
{
  int  i;
  int  new_w;

  i = 0;
  new_w = 1;
  while (str[i])
  {
    if (str[i] >= 'a' && str[i] <= 'z')
    {
      if(new_w)
      {
        str[i] = str[i] - ('a' - 'A');
      }
      new_w = 0;
    }
    else if (str[i] >= 'A' && str[i] <= 'Z')
    {
      if(!(new_w))
      {
        str[i] = str[i] + ('a' - 'A');
      }
      new_w = 0;
    }
    else
    {
      new_w = 1;
    }
   i++;
  }
  return (str);
}

int  main()
{
  char   str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

  printf("%s\n", str);
  ft_strcapitalize(str);
  printf("%s\n", str);
  return (0);
}
