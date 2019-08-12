/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 16:18:27 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 16:18:29 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		ft_error(void);

void    ft_init_grille(char contour[16]);

int		ft_init_contour(char *argv)
{
	int		c;
	int		c1;
	char	contour[16];

	c = 0;
	c1 = 0;
	while ((argv[c] >= '1'|| argv[c] <= '4' || argv[c] == ' ') && argv[c] != '\0') 
	{
		if ((argv[c] < '1' || argv[c] > '4') && argv[c] != ' ' && argv[c] != '\0')
		{
			ft_error();
			return (0);
		}
		if ((argv[c] >= '1' || argv[c] <= '4') && argv[c] != ' ')
		{
			contour[c1] = argv[c];
			c1++;
		}
		c++;
	}
	if (c1 != 16)
		ft_error();
	else
		ft_init_grille(contour);
	return (0);
}
int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_error();
		return (0);
	}
	ft_init_contour(argv[1]);
	return (0);
}
