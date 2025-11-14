/*
#include <stdio.h>
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	beg;
	int	end;
	int	temp;

	beg = 0;
	end = size - 1;
	while (beg < end)
	{
		temp = tab[beg];
		tab[beg] = tab[end];
		tab[end] = temp;
		beg++;
		end--;
	}
}

void	print(int *tab, int size)
{
	if (size == 1)
	{
		printf("%d, ", tab[size -1]);
	}
	else
	{
		print(tab, size -1);
		printf("%d, ", tab[size -1]);
	}
}
/*
int	main()
{
	int 	cat[10] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
	
	printf("Original: ");
	print(cat, 10);
	printf("\n");

	ft_rev_int_tab(cat, 10);

	printf("Invertido: ");
	print(cat, 10);
	printf("\n");

	return (0);
}*/

