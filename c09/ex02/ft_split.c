/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/19 10:37:57 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/19 10:37:59 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_is_charset(char *str, char *charset)
{
	int i;

	i = -1;
	while (charset[++i] != '\0')
		if (str[0] == charset[i])
			return (1);
	return (0);
}

int			ft_to_malloc(char *str, char *charset)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		while (ft_is_charset(&str[i], charset) == 1)
			i++;
		while (ft_is_charset(&str[i], charset) == 0 && str[i] != '\0')
			i++;
		if (ft_is_charset(&str[i - 1], charset) == 0)
			n++;
		if (str[i] != '\0')
			i++;
	}
	return (n);
}

char		*ft_copy_w(char *str, int n, int *sign, char *dest)
{
	int		i;

	i = -1;
	if (!(dest = malloc(sizeof(char) * n + 1)))
		*sign = 1;
	*dest = 0;
	while (++i != n)
		dest[i] = str[i];
	dest[i] = 0;
	return (dest);
}

void		ft_do(char *str, char *charset, char **split, int *sign)
{
	int		i;
	int		j;
	int		n;
	char	*dest;

	i = 0;
	j = 0;
	dest = 0;
	while (str[i] != '\0')
	{
		while (ft_is_charset(&str[i], charset) == 1)
			i++;
		n = 0;
		while (ft_is_charset(&str[i + n], charset) == 0 && str[i + n] != '\0')
			n++;
		if (n != 0)
		{
			split[j] = ft_copy_w(&str[i], n, sign, &dest[j]);
			j++;
			i += n;
		}
		if (*sign == 1)
			break ;
	}
}

char		**ft_split(char *str, char *charset)
{
	char	**split;
	int		sign;

	sign = 0;
	if (!(split = malloc(sizeof(char *) * (ft_to_malloc(str, charset) + 1))))
		return (0);
	*split = 0;
	ft_do(str, charset, split, &sign);
	if (sign == 1)
		return (0);
	split[ft_to_malloc(str, charset)] = 0;
	return (split);
}
