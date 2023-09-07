void	ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

#include <stdio.h>

int main()
{
    int c = 3;
    int d = 5;

    ft_swap(&c, &d);
    printf("a = %d\nb = %d", c, d);
}