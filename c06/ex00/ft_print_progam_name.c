/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_progam_name.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 13:12:18 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/10 13:12:20 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *str)
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
	ft_print_program_name(ag[0]);
	return (0);
}
