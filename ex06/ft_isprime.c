int is_divisible(int nb, int div)
{
	if (nb == (nb / div) * div)
		return 1;
	return 0;
}

int ft_isprime(int nb)
{
	if (nb <= 1)
		return 0;
	if (nb == 2)
		return 1;
	if (is_divisible(nb, 2))
		return 0;
	if (is_divisible(nb, 3))
		return 0;
	if (is_divisible(nb, 5))
		return 0;
	return 1;
}

