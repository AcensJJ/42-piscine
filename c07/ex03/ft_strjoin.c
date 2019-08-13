#include <stdlib.h>

int		ft_strlen(char **strs)
{
	int i;

	i = 0;
	while (strs[i] != '\0')
		i++;
	return (i);
}

int		ft_strlensep(char **strs, char sep)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (strs[i] != '\0')
	{
		j = 0;
		while (strs[i][k] != '\0')
		{
			j++;
			k++;
		}
		i++;
	}
	i = 0;
	while ()
	return (k);
}

char 	*ft_strjoin(int size, char **strs, char sep)
{
	int i;
	int j;

	i = 0;
	j = 0;
	strs = malloc(sizeof(int *) * ();
	if (size == 0)
		return (NULL);
	if (size == 1)
		return (strs);
	while (i != size)
	{
		i++;
	}
}
