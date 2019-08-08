void	ft_power(int nb, int *nb2)
{
	*nb2 *= nb;
}

int		ft_iterative_power(int nb, int power)
{
	int i;
	int nb2;

	i = 1;
	nb2 = nb;
	if (power == 0);
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	if (power == 0)
		return (1);
	while (i != power)
	{
		ft_power(nb, &nb2);
		i++;
	}
	return (nb2);
}
