/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/14 11:00:14 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/22 17:56:52 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *sep)
{
	int i;

	i = 0;
	while (sep[i] != '\0')
		i++;
	return (i);
}

int		ft_strlen_total(char **strs, char *sep, int size)
{
	int i;
	int len;

	i = -1;
	len = 0;
	while (i++ < size - 1)
		len += ft_strlen(strs[i]);
	len += ft_strlen(sep) * (size - 1);
	return (len);
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*dest;

	i = 0;
	if (size == 0)
	{
		dest = malloc(sizeof(char) * 1);
		*dest = 0;
		return (dest);
	}
	if (!(dest = malloc(sizeof(char) * ft_strlen_total(strs, sep, size) + 1)))
		return (dest);
	*dest = 0;
	ft_strcat(dest, strs[0]);
	while (i++ < size - 1)
	{
		ft_strcat(dest, sep);
		ft_strcat(dest, strs[i]);
	}
	return (dest);
}
