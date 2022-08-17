#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    if (power <= 0)
        return 0;
    if (power == 1)
        return nb;
    return (nb * ft_recursive_power(nb, --power));
}

int main()
{
    printf("%d\n", ft_recursive_power(5, 3));
    return 0;
} 
