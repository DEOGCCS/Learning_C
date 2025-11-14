#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (!((str[i] >= 'A' && str[i] <= 'Z') || 
            (str[i] >= 'a' && str[i] <= 'z')))
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int      main()
{
    printf("%d\n", ft_str_is_alpha("aleluia"));
    printf("%d\n", ft_str_is_alpha("ALEluia"));
    printf("%d\n", ft_str_is_alpha("12345"));
    printf("%d\n", ft_str_is_alpha(""));
    return(0);
}
