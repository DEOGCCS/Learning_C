#include <stdio.h>

char	*ft_strrev(char *str)
{
    int i;
    int last;
    char temp;

    i = 0;
    while (str[i])
        i++;
    last = i - 1;
    i = 0;
    while (last > i)
    {
        temp = str[i];
        str[i] = str[last];
        str[last] = temp;
        i++;
        last--;
    }
    return (str);
}

int main(void)
{
    char str[] = "Hello my beautifull world";

    printf("regular string: %s\n", str);
    printf("reversed string: %s\n", ft_strrev(str));
    return (0);
}
