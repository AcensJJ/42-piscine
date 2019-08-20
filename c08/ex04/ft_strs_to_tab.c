/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strs_to_tab.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/15 13:48:41 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/15 13:48:44 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int					ft_strlen_total(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i != ac)
	{
		j += ft_strlen(av[i]);
		i++;
	}
	return (j);
}

char				*ft_strcpy(char *dest, char *src)
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

char				*ft_strdup(char *src, char *dest, int *sign)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (!(dest = malloc(sizeof(char) * (i + 1))))
		*sign = -1;
	*dest = 0;
	ft_strcpy(dest, src);
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			sign;
	char		*dest;
	t_stock_str	*stock;

	i = 0;
	sign = 0;
	dest = 0;
	if (!(stock = malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	while (i != ac && av[i] != '\0')
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i], &dest[i], &sign);
		if (sign == 1)
			return (0);
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
