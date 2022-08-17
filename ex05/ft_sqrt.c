#include <stdio.h>

int ft_sqrt(int nb)
{
    int sqrt;
	int mid;

	mid = nb / 2;
	while (sqrt <= mid)
	{
		if (sqrt * sqrt == nb)
			return sqrt;
		sqrt++;
	}
	return 0;
}


int main()
{
	printf("%d\n%d\n", ft_sqrt(4), ft_sqrt(10));
	return 0;
}
