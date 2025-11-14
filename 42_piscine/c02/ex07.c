#include <stdio.h>

char *ft_strupcase(char *str)
{
  int  i;

  i = 0;
  while (str[i])
  {
      if (str[i] >= 'a' && str[i] <= 'z')
      {
        str[i] = str[i] - ('a' - 'A'); // a=97 e A=65, ex: 97-(97-65) = 97-32 = 65
      }
        i++;
  }
  return(str);
}

int  main()
{
	char src[] = "hello";

	printf("Original: %s\n", src);
	ft_strupcase(src);
	printf("Uppercase: %s\n", src);
	return (0);
}
