/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   doop.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/15 06:05:03 by matbois      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/22 18:05:05 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		ft_addition(int a, int b);
int		ft_soustraction(int a, int b);
int		ft_division(int a, int b);
int		ft_multiplication(int a, int b);
int		ft_modulo(int a, int b);

int		ft_putnbr(int a, int b, int (*f)(int, int))
{
	long long int	i;
	long long int	nnbb;
	char			c;

	i = 10;
	nnbb = f(a, b);
	if (nnbb < 0)
	{
		write(1, "-", 1);
		nnbb = nnbb * -1;
	}
	while (nnbb >= i)
		i *= 10;
	while (i >= 10)
	{
		i /= 10;
		c = (nnbb / i) + 48;
		write(1, &c, 1);
		nnbb -= i * (nnbb / i);
	}
	write(1, "\n", 1);
	return (0);
}

char	*ft_whitespace_sign(char *str, int *sign)
{
	int i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			*sign *= -1;
	return (str + i);
}

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int result;

	i = -1;
	sign = 1;
	result = 0;
	str = ft_whitespace_sign(str, &sign);
	while (str[++i] >= '0' && str[i] <= '9')
		result = result * 10 + ((str[i] - 48) * sign);
	return (result);
}

int		ft_choose(char c, int a, int b, int (*f[5])(int, int))
{
	if (c == '+')
		return (ft_putnbr(a, b, f[0]));
	if (c == '-')
		return (ft_putnbr(a, b, f[1]));
	if (c == '/' && b != 0)
		return (ft_putnbr(a, b, f[2]));
	if (c == '/')
		return (write(1, "Stop : division by zero\n", 24));
	if (c == '*')
		return (ft_putnbr(a, b, f[3]));
	if (c == '%' && b != 0)
		return (ft_putnbr(a, b, f[4]));
	if (c == '%')
		return (write(1, "Stop : modulo by zero\n", 22));
	write(1, "0\n", 2);
	return (1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		a;
	int		b;
	int		(*f[5])(int, int);

	if (argc != 4)
		return (1);
	i = 0;
	while (argv[2][i])
		i++;
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	f[0] = &ft_addition;
	f[1] = &ft_soustraction;
	f[2] = &ft_division;
	f[3] = &ft_multiplication;
	f[4] = &ft_modulo;
	if (i == 1)
		return (ft_choose(argv[2][0], a, b, f));
	write(1, "0\n", 2);
	return (1);
}
