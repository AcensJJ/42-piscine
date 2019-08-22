/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/07 18:57:16 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/22 13:32:06 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

int	ft_atoi(char *str)
{
	int signe;
	int nb;

	nb = 0;
	signe = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signe *= -1;
		++str;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + *str - '0';
		++str;
	}
	return (nb * signe);
}
