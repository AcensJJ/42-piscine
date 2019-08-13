#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		ft_strlensep(char *sep)
{
	int i;

	i = 0;
	while (sep[i] != '\0')
		i++;
	i++;
	return (i);
}

int		ft_strlen_total(char **strs, char *sep, int size)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (i != size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
			k++;
		}
		k++;
		i++;
	}
	k += (size - 1) * ft_strlensep(sep);
	return (k);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char 	*ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	char *dest;

	dest = NULL;
	if (size == 0)
	{
		dest = malloc(1);
		dest = 0;
		return (dest);
	}
	dest = malloc(sizeof(char) * ft_strlen_total(strs, sep, size) + 1);
	if (!strs)
		return (dest);
	i = 0;
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i != size - 1)
			ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}


int main()
{
	char tutu[] = "tutu";
	char titi[] = "titi";
	char toto[] = "toto";
	char sep[] = "sep";
	char *strs[3] = {tutu, titi, toto};
	
	printf("%s\n", ft_strjoin(3, strs, sep));
}