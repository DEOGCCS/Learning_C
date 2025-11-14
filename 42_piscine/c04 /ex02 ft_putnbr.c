#include <unistd.h>

void  ft_putchar(char c)
{
  write( 1, &c,1);
}

void  ft_putnbr(int nbr)
{
  if (nbr == -2147483648)
  {
    ft_putchar('-');
    ft_putchar('2');
    ft_putnbr(147483648);
  }
  else if (nbr < 0)
  {
    ft_putchar('-');
    ft_putnbr(nbr * (-1));
  }
  else if (nbr >= 0 && nbr <= 9)
  {
    ft_putchar(nbr + '0');
  }
  else
  {
    ft_putnbr(nbr / 10);
    ft_putnbr(nbr % 10);
  }
}

int  main(void)
{
  ft_putnbr(1234);
  ft_putchar('\n');
  ft_putnbr(-1234);
  ft_putchar('\n');
  ft_putnbr(-2147483648);
  ft_putchar('\n');
  ft_putnbr(2147483647);
  ft_putchar('\n');
  return (0);
}
