/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush01.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 10:16:34 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 11:56:27 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	rush(int x, int y)
{
	int	a;
	int	b;
	int	c;
	int	i;

	a = A;
	b = C;
	c = B;
	i = 0;

	while ( i != y)
	{	
		if (i == 0)
			ft_putchar_start(a, b, c, x);
		else if (i == y)
			ft_putchar_end(a, b, c, x);
		else
			ft_putchar_mid(c, x);
		i++;
	}
}

void	ft_mid(int c, int x)
{
	int i;

	i = 0;
	while (i != x)
	{
		if (i == x)
		{
			ft_putchar(c);
			break;
		}
		else if ( i == 0)
			ft_putchar(c);
		else
			ft_putcahr(' ');
		i++;
	}
}

void	ft_putchar_start(int a, int b, int c, int x)
{
	int i;

	i = 0;
	while (i != x)
	{
	if (i == x)
	{
		ft_putchar(c);
		break;
	}
	else if ( i == 0)
		ft_putchar(a);
	else
		ft_putcahr(b);
	i++;
	}
}

void	ft_putchar_end(int a, int b, int c, int x)
{
	int i;

	i = 0;
	while (i != x)
	{
	if (i == x)
	{
		ft_putchar(c);
		break;
	}
	else if ( i == 0)
		ft_putchar(a);
	else
		putchar(b);
		i++;
	}
}i
