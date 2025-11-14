#include <stdio.h>

char	*ftcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

int     main(void)
{
    char s1[100] = "hello";
    char s2[] = "world";

    printf("%s/n", s1);
    ftcmp(s1, s2);
    printf("%s/n", s1);
    return (0);
}
