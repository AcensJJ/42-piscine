/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putstr_non_printable.c                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 14:16:08 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/05 14:16:11 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	deci_hexa(char deci)
{
	static char base[] = "0123456789abcdef";

	write(1, &base[deci / 16], 1);
	write(1, &base[deci % 16], 1);
}

void	ft_wrt(char *str, int i)
{
	char deci;

	write(1, "\\", 1);
	deci = str[i];
	deci_hexa(deci);
}

char	*ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32)
			ft_wrt(str, i);
		else if (str[i] == 127)
			write(1, "\\7f", 3);
		else
			write(1, &*(str + i), 1);
		i++;
	}
	return (str);
}
