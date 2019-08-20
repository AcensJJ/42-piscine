/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gamichal <gamichal@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 01:02:34 by gamichal     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 19:38:46 by gamichal    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	rush(int x, int y);

int		ft_atoi(char *str)
{
	int nbr;
	int sign;

	sign = 1;
	nbr = 0;
	while (*str == '\t' || *str == '\n' || *str == '\f' || *str == '\r' ||
			*str == '\v' || *str == ' ')
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		++str;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + *str - '0';
		++str;
	}
	return (nbr * sign);
}

int		main(int argc, char **argv)
{
	if (argc == 3 && ft_atoi(argv[1]) > 0 && ft_atoi(argv[2]) > 0)
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	else
		return (1);
	return (0);
}
