#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int res;
    res = 1;
    if (nb <= 0)
        return 0;
    while (nb)
    {
        res *= nb;
        nb--;
    }
    return res;        
}


int main()
{
    printf("%d\n", ft_iterative_factorial(7));
    return 0;
}
