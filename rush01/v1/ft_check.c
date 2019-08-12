/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_check.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 16:17:30 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 16:17:32 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_check_corner_u(char contour[16], char grille[4][4]);

void	init_check_l(char contour[16], char grille[4][4])
{
	int i;
	int error;

	error = 0;
	i = 12;
	while (i != 16)
	{
		if (contour[i] == '4' && contour[i - 4] != '1')
			error = 1;
		if (contour[i] == '1' && contour[i - 4] == '1')
			error = 1;
		i++;
	}
	if (error == 0)
		ft_check_corner_u(contour, grille);
	else
		ft_error();

}

void	init_check_r(char contour[16], char grille[4][4])
{
	int i;
	int error;

	error = 0;
	i = 8;
	while (i != 12)
	{
		if (contour[i] == '4' && contour[i + 4] != '1')
			error = 1;
		if (contour[i] == '1' && contour[i + 4] == '1')
			error = 1;
		i++;
	}
	if (error == 0)
		init_check_l(contour, grille);
	else
		ft_error();

}

void	init_check_d(char contour[16], char grille[4][4])
{
	int i;
	int error;

	error = 0;
	i = 4;
	while (i != 8)
	{
		if (contour[i] == '4' && contour[i + 4] != '1')
			error = 1;
		if (contour[i] == '1' && contour[i + 4] == '1')
			error = 1;
		i++;
	}
	if (error == 0)
		init_check_r(contour, grille);
	else
		ft_error();

}

void	init_check_u(char contour[16], char grille[4][4])
{
	int i;
	int error;

	error = 0;
	i = 0;
	while (i != 4)
	{
		if (contour[i] == '4' && contour[i + 4] != '1')
			error = 1;
		if (contour[i] == '1' && contour[i + 4] == '1')
			error = 1;
		i++;
	}
	if (error == 0)
		init_check_d(contour, grille);
	else
		ft_error();
}
