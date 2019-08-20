/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush00.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gamichal <gamichal@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 17:52:23 by gamichal     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 19:51:56 by gamichal    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_top(int x)
{
	int i;

	i = x - 2;
	ft_putchar('o');
	while (i > 0)
	{
		ft_putchar('-');
		--i;
	}
	if (x > 1)
		ft_putchar('o');
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
				ft_putchar('|');
			else
				ft_putchar(' ');
			--i;
		}
		i = x;
		ft_putchar('\n');
		--j;
	}
}

void	rush(int x, int y)
{
	print_top(x);
	if (y > 2)
		print_mid(x, y);
	if (y > 1)
		print_top(x);
}
