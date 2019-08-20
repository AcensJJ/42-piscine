/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb2.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/01 16:01:38 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/02 16:29:15 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '8'))
		write(1, ", ", 2);
}

void	ft_cal2(char a, char b, char c, char d)
{
	while (c <= '9' && d <= '9')
	{
		ft_print(a, b, c, d);
		if (d == '9')
		{
			c++;
			d = '0';
		}
		else
			d++;
	}
}

void	ft_calcul(char a, char b, char c, char d)
{
	char e;

	e = 0;
	while (e != 1)
	{
		ft_cal2(a, b, c, d);
		if (b == '8' && a == '9')
			break ;
		else if (b != '9')
		{
			b++;
			c = a;
			d = b + 1;
		}
		else
		{
			b = '0';
			c = a;
			d = b + 1;
			a++;
		}
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	ft_calcul(a, b, c, d);
}
