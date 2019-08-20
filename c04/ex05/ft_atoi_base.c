/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi_base.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/07 18:57:32 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/07 18:57:34 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		get_base(char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int		check_base(char *base)
{
	int i;
	int j;

	i = -1;
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-' ||
		(base[i] <= 31) || base[i] == 127)
			return (1);
		j = -1;
		while (base[++j])
			if ((base[i] == base[j]) && i != j)
				return (1);
	}
	if (i < 2)
		return (1);
	return (0);
}

int		ft_return_nb(char *chiffre, char *base)
{
	int i;

	i = 0;
	while (*chiffre != base[i] && base[i] != '\0')
		i++;
	if (*chiffre == base[i] && base[i] != '\0')
		return (i);
	else
		return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int signe;
	int nb;
	int	len;

	nb = 0;
	signe = 1;
	len = get_base(base);
	if (check_base(base) == 1)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signe *= -1;
		++str;
	}
	while (ft_return_nb(str, base) >= 0)
	{
		nb = nb * len + ft_return_nb(str, base);
		++str;
	}
	nb *= signe;
	return (nb);
}
