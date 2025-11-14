#include <stdio.h>

void        ft_swap(int *a, int *b)
{       
        int        temp;
        temp = *a;
        *a = *b;
        *b = temp; 
}
/*
int main(void)
{
    int x = 5;
    int y = 10;
    
    printf("before swap - x: %d, y: %d\n", x, y);
    ft_swap(&x, &y);
    printf("Main swap - x: %d, y: %d\n", x, y);
    
    return (0);
}*/
