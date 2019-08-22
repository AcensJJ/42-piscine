/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_caract.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/22 13:00:59 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/22 13:42:32 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

void	ft_div(int nb1, int nb2)
{
	int val;

	if (nb2 != 0)
	{
		val = nb1 / nb2;
		ft_putnbr(val);
	}
	else
		write(1, "Stop : division by zero", 23);
}

void	ft_mod(int nb1, int nb2)
{
	int val;

	if (nb2 != 0)
	{
		val = nb1 % nb2;
		ft_putnbr(val);
	}
	else
		write(1, "Stop : modulo by zero", 21);
}
