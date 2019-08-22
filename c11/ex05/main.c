/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/21 18:05:20 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/22 13:41:56 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

int		main(int ac, char **av)
{
	int		nb1;
	int		nb2;

	if (ac != 4)
		return (0);
	nb1 = ft_atoi(av[1]);
	nb2 = ft_atoi(av[3]);
	if (*av[2] == '/')
		ft_div(nb1, nb2);
	else if (*av[2] == '*')
		ft_fois(nb1, nb2);
	else if (*av[2] == '+')
		ft_plus(nb1, nb2);
	else if (*av[2] == '-')
		ft_moins(nb1, nb2);
	else if (*av[2] == '%')
		ft_mod(nb1, nb2);
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
