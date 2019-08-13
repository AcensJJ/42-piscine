#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int diff;
	int *tab;
	int i;

	i = 0;
	diff = max - min;
	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int *) * diff);
	tab = malloc(sizeof(int) * diff);
	if (!range)
		return (-1);
	if (!tab)
		return (-1);
	while (i != max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}
