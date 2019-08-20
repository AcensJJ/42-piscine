/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_check_corner.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 16:17:46 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 16:17:47 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes.h"

void	ft_check_corner_l(char contour[16], char grille[4][4])
{
	int i;
	int error;

	error = 0;
	i = 12;
	if (contour[i] == '1' && contour[i - 9] != '1')
		error = 1;
	i += 3;
	if (contour[i] == '1' && contour[i - 8] != '1')
		error = 1;
	if (error == 1)
		ft_error('0', '7');
	else
		ft_check_num_u(contour, grille);
}

void	ft_check_corner_r(char contour[16], char grille[4][4])
{
	int i;
	int error;

	error = 0;
	i = 8;
	if (contour[i] == '1' && contour[i + 8] != '1')
		error = 1;
	i += 3;
	if (contour[i] == '1' && contour[i - 7] != '1')
		error = 1;
	if (error == 1)
		ft_error('0', '8');
	else
		ft_check_corner_r(contour, grille);
}

void	ft_check_corner_d(char contour[16], char grille[4][4])
{
	int i;
	int error;

	error = 0;
	i = 4;
	if (contour[i] == '1' && contour[i + 7] != '1')
		error = 1;
	i += 3;
	if (contour[i] == '1' && contour[i + 8] != '1')
		error = 1;
	if (error == 1)
		ft_error('0', '9');
	else
		ft_check_corner_l(contour, grille);
}

void	ft_check_corner_u(char contour[16], char grille[4][4])
{
	int i;
	int error;

	error = 0;
	i = 0;
	if (contour[i] == '1' && contour[i + 8] != '1')
		error = 1;
	i += 3;
	if (contour[i] == '1' && contour[i + 9] != '1')
		error = 1;
	if (error == 1)
		ft_error('1', '0');
	else
		ft_check_corner_d(contour, grille);
}
