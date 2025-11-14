//#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
    int  i = 0;
    
    while ((*s1 != '\0') && (*s2 !='\0') && (*s1 == *s2)) // primeiro tem de dizer ao pc pra correr as duas palavras
    {
        s1++;
        s2++;
    }
    // agora sim podemos dar as condiçoes para sair os resultados
    if ((*s1 - *s2) > 0) // se a subtração de ascii de s1 for maior que s2 retorna 1
        return (1);
    else if ((*s1 - *s2) < 0) // se a subtração de ascii de s1 for menor que s2 retorna -1
        return (-1);
    else 
        return (0); // se for igual retorna 0
}
/*
int main()
{
    char s1[] = "hello";
    char s2[] = "hellow";
    printf("ft_strcmp: %d\n", ft_strcmp(s1, s2));
    printf("strcmp: %d\n", strcmp(s1, s2));


    return 0;
}*/
