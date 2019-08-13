#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_strdup(char *src)
{
	char *dest;
	unsigned int i;

	i = 0;
	while (src[i] != '\0')
		i++; 
	dest = malloc(sizeof(char) * (i + 1));
	*dest = 0;
	ft_strcpy(dest, src);
		return (dest);
}
