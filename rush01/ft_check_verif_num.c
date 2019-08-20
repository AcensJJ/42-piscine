/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_check_verif_num.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 16:17:55 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 16:17:56 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes.h"

void	ft_check_num_l(char contour[16], char grille[4][4])
{
	int i;
	int nb4;
	int nb1;

	nb4 = 0;
	nb1 = 0;
	i = 12;
	while (i != 16)
	{
		if (contour[i] == '4')
			nb4 += 1;
		if (contour[i] == '1')
			nb1 += 1;
		i++;
	}
	if (nb1 == 1 & nb4 < 2)
		ft_check_num_3_u(contour, grille);
	else
		ft_error('1', '1');

}

void	ft_check_num_r(char contour[16], char grille[4][4])
{
	int i;
	int nb4;
	int nb1;

	nb4 = 0;
	nb1 = 0;
	i = 8;
	while (i != 12)
	{
		if (contour[i] == '4')
			nb4 += 1;
		if (contour[i] == '1')
			nb1 += 1;
		i++;
	}
	if (nb1 == 1 & nb4 < 2)
		ft_check_num_r(contour, grille);
	else
		ft_error('1', '2');

}

void	ft_check_num_d(char contour[16], char grille[4][4])
{
	int i;
	int nb4;
	int nb1;

	nb4 = 0;
	nb1 = 0;
	i = 4;
	while (i != 8)
	{
		if (contour[i] == '4')
			nb4 += 1;
		if (contour[i] == '1')
			nb1 += 1;
		i++;
	}
	if (nb1 == 1 & nb4 < 2)
		ft_check_num_l(contour, grille);
	else
		ft_error('1', '3');

}

void	ft_check_num_u(char contour[16], char grille[4][4])
{
	int i;
	int nb4;
	int nb1;

	nb4 = 0;
	nb1 = 0;
	i = 0;
	while (i != 4)
	{
		if (contour[i] == '1')
			nb1 += 1;
		if (contour[i] == '4')
			nb4 += 1;
		i++;
	}
	if (nb1 == 1 & nb4 < 2)
		ft_check_num_d(contour, grille);
	else
		ft_error('1', '4');
}
