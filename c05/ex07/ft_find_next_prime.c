int		ft_find_next_prime(int nb)
{
	int i;
	int j;

	i = nb + 1;
	if (nb < 2)
		return (2);
	while (i)
	{
		j = i - 1;
		if (i % 2 == 0)
			i++;
		while (j)
		{
			if (j != 3)
				return (i);
			if (i % j != 0)
				j--;
		}
		i++;
	}
}
