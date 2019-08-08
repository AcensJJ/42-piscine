void	facto(int i, int *nbactu)
{
	*nbactu *= i;
}

int		ft_iterative_factorial(int nb)
{
	int i;
	int nbactu;

	i = 1;
	nbactu = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i != nb + 1)
	{
		facto(i, &nbactu);
		i++;
	}
	return (nbactu);
}
