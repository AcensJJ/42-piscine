int		ft_is_prime(int nb)
{
	int i;

	i = nb - 1;
	if (nb == 2)
		return (1);
	if (nb < 2)
		return (0);
	while (i != 2)
	{
		if (nb % i == 0)	
			return (0);
		i--;
	}
	return (1);
}

int main()
{
	printf("%d", ft_is_prime(1000000007));
}