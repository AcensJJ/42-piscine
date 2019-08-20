/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush01.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gamichal <gamichal@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 13:40:47 by gamichal     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 19:54:12 by gamichal    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_top(int x)
{
	int i;

	i = x - 2;
	ft_putchar('/');
	while (i > 0)
	{
		ft_putchar('*');
		--i;
	}
	if (x > 1)
		ft_putchar(92);
	ft_putchar('\n');
}

void	print_mid(int x, int y)
{
	int i;
	int j;

	i = x;
	j = y - 2;
	while (j > 0)
	{
		while (i > 0)
		{
			if (i == x || i == 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			--i;
		}
		i = x;
		ft_putchar('\n');
		--j;
	}
}

void	print_bot(int x)
{
	int i;

	i = x - 2;
	ft_putchar(92);
	while (i > 0)
	{
		ft_putchar('*');
		--i;
	}
	if (x > 1)
		ft_putchar('/');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	print_top(x);
	if (y > 2)
		print_mid(x, y);
	if (y > 1)
		print_bot(x);
}
