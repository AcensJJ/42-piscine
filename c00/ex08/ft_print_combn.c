/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_combn.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 10:20:10 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/05 10:31:14 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &*(str + i), 1);
		i++;
	}
}

int		incr_val(char *str, int len)
{
	int i;
	int j;

	i = len - 1;
	j = len - 1;
	if (str[i] == '9')
	{
		while (i >= 0 && str[i] == '9')
			i--;
		if (i >= 0)
		{
			while (j != i && str[j] == '9')
			{
				str[j] = '0';
				j--;
			}
			str[i]++;
			return (1);
		}
		return (0);
	}
	else
		str[i]++;
	return (1);
}

int		is_good(char *str, int len)
{
	int	i;
	int	n;
	int	var_de_test;

	var_de_test = 0;
	n = 1;
	i = 0;
	while (1)
	{
		if (str[i] >= str[i + n] && (i + n) < len)
			return (0);
		else if ((i + n + 1) <= (len - 1))
			n++;
		else if ((i + n) == (len - 1) && i != (len - 1))
		{
			i++;
			n = 1;
		}
		else if (i == (len - 1))
			return (1);
	}
}

void	ft_init(char *str, int len)
{
	int i;

	i = 0;
	while (i != len)
	{
		str[i] = '0';
		i++;
	}
}

void	ft_print_combn(int len)
{
	char	str[len];
	int		i;
	int		j;

	j = 0;
	i = 1;
	if (len > 0 && len < 10)
	{
		ft_init(str, len);
		while (i)
		{
			i = incr_val(str, len);
			if (is_good(str, len))
			{
				if (i)
				{
					if (j > 0)
						write(1, ", ", 2);
				}
				ft_putstr(str);
				j++;
			}
		}
	}
}
