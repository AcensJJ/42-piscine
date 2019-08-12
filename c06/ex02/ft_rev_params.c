/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_rev_params.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 13:12:35 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/10 13:12:37 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_programs(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **ag)
{
	int i;

	i = 1;
	while (i != ac)
		i++;
	while (i != 1)
	{
		ft_rev_programs(ag[i]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
