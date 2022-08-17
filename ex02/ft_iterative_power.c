#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    if (power <= 0)
        return 0;
    while (power)
    {
       nb *= nb;
       power--;
    }
    return nb;
}

int main()
{
    printf("%d\n", ft_iterative_power(5, 10));
    return 0;
} 
