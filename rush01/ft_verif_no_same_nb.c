/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_verif_no_same_nb.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 16:18:24 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 16:18:25 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes.h"

void	ft_test_error(char contour[16], char grille[4][4], char error3[1])
{
	if (*error3 == 1)
		ft_error('2', '2');
	else
		ft_check_before_col_u(contour, grille);
}

void	ft_par_col(char contour[16], char grille[4][4], char error3[1])
{
	int x;
	int y;
	int test;

	y = 0;
	while (y != 4)
	{
		x = 0;
		while (x != 4)
		{
			test = 0;
			while (test != 4)
			{
				if (grille[x][y] == grille[test][y] && grille[x][y] != '0' && x != test)
					*error3 = 1;
				test++;
			}
			x++;
		}
		y++;
	}
	ft_test_error(contour, grille, error3);
}

void	ft_par_row(char contour[16], char grille[4][4], char error3[1])
{
	int x;
	int y;
	int test;

	x = 0;
	while (x != 4)
	{
		y = 0;
		while (y != 4)
		{
			test = 0;
			while (test != 4)
			{
				if (grille[x][y] == grille[x][test] && grille[x][y] != '0' && y != test)
					*error3 = 1;
				test++;
			}
			y++;
		}
		x++;
	}
	ft_par_col(contour, grille, error3);
}

void	init_error(char contour[16], char grille[4][4])
{
	char error3[1];

	*error3 = 0;
	ft_par_row(contour, grille, error3);
}
