/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rmazars <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/17 09:42:56 by rmazars      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 18:58:20 by rmazars     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

void	afferror(void)
{
	write(1, "Error\n", 6);
}

char	*ac_is_2(char **av, char *number)
{
	number = malloc(sizeof(char) * ft_strlen(av[1]));
	number = ft_strcpy(number, av[1]);
	return (number);
}

char	*ac_is_3(char **av, char *dico, char *number)
{
	if (!(dico = malloc(sizeof(char) * (ft_strlen(av[1]) + 5))))
	{
		afferror();
	}
	dico = ft_strcpy2(dico, av[1]);
	number = malloc(sizeof(char) * ft_strlen(av[2]));
	number = ft_strcpy(number, av[2]);
	return (number);
}

int		main(int ac, char **av)
{
	char	*dico;
	char	*number;
	long	nbr;

	number = 0;
	if (ac == 2 || ac == 3)
	{
		dico = malloc(sizeof(char) * 18);
		dico = ft_strcpy2(dico, "numbers.dict");
		if (ac == 2)
			number = ac_is_2(av, number);
		else if (ac == 3)
			number = ac_is_3(av, dico, number);
		nbr = ft_atoi(number);
		if (!in_dico(nbr))
			separateur(nbr);
		else
			read_dict(nbr);
	}
	else
		afferror();
	return (0);
}
