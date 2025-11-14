//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    return (nb * ft_recursive_power(nb, power -1));  
}
/*
int  main(void)
{
    int    a = 5;
    int    b = 5;
    
    int resultado = ft_recursive_power(a, b);

    printf("%d elevado a %d é %d\n", a, b, resultado);
    return (0);
}*/
