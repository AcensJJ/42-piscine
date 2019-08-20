/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_show_tab.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/15 13:48:51 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/15 13:48:52 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		write(1, &str[i], 1);
}

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

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
