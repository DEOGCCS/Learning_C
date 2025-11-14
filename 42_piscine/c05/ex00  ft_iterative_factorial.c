#include  <stdio.h>

int  ft_iterative_factorial(int nb)
{
  int  result;
  int  i;

  result = 1;
  i = 1;

  if (nb < 0)
      return (0);
  
  while (i <= nb)
    {
      result *= i;
      i++;
    }
  return (result);
}

int  main(void)
{
  int nb = 5;
  int factorial = ft_iterative_factorial(nb);
  printf("Factorial of %d is %d", nb, factorial);
  return (0);
}
