int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 2)
		return (1);
	if (nb < 2)
		return (0);
	while (nb % i != 0 && (i * i <= nb) && i <= 46340)
		i++;
	if (nb % i == 0)
		return (0);
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

#include <stdio.h>

int main()
{
	printf("%d", ft_find_next_prime(2147483647));
}