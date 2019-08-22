/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   atoi.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: matbois <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/21 18:29:40 by matbois      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 19:13:49 by matbois     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_whitespace_sign(char *str, int *sign)
{
	int i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			*sign *= -1;
	return (str + i);
}

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int result;

	i = -1;
	sign = 1;
	result = 0;
	str = ft_whitespace_sign(str, &sign);
	while (str[++i] >= '0' && str[i] <= '9')
		result = result * 10 + ((str[i] - 48) * sign);
	return (result);
}
