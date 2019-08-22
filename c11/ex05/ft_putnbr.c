/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/07 18:57:07 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/22 13:31:59 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

void	ft_print(char vtp)
{
	if (vtp != 0)
		write(1, &vtp, 1);
	else
		write(1, "0", 1);
}

void	ft_putnbr(int nb)
{
	long long	n;
	long long	i;
	long long	reste;
	int			print;
	char		vtp;

	n = nb;
	i = 10;
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
	}
	while (n >= i)
		i *= 10;
	while (i >= 10)
	{
		i /= 10;
		reste = n % i;
		print = (n - reste) / i;
		vtp = print + 48;
		ft_print(vtp);
		n = reste;
	}
}
