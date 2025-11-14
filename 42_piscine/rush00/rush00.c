#include <unistd.h>

// função de ft_putchar
void    ft_putchar(char c);

int     main(void)   
{
        char c;

        c = 'c';

        write(1, &c, 1);
        return (0);
}

// Função do rush
int        rush(char l)
{
        char line = l;
        l = 'A';
        while( l >= '1')
        {
        write(1, &l, 1);
        l--        
        }
        while( l < l)
        {
        write(1, &l, 1);
        l+        
        }


// função de main

int        main()
{
        rush(5, 5);
        returno (0);
}
