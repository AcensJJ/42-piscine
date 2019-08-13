#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int range;
	int *tab;
	int i;

	i = 0;
	range = max - min;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * range);
	if (!tab)
		return (NULL);
	while (i != max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
