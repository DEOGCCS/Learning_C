#include <stdio.h>

int     ft_str_is_uppercase(char *str)
{
        int     i;

        i = 0;
        while (str[i])
        {
                if (!(str[i] >= 'A' && str[i] <= 'Z'))
                {
                        return (0);
                }
                i++;
        }
        return (1);
}

int     main()
{
        printf("%d\n", ft_str_is_uppercase("asdf"));
        printf("%d\n", ft_str_is_uppercase("ASF"));
        printf("%d\n", ft_str_is_uppercase("124"));
        printf("%d\n", ft_str_is_uppercase(""));
        return(0);
}
