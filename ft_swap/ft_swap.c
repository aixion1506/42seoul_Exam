void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

#include <stdio.h>
int	main()
{
	int x = 5;
	int y = 1;

	ft_swap(&x, &y);
	printf("%d %d", x, y);

} 
