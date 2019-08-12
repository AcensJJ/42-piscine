/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_check_3.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 16:17:38 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 16:17:40 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	init_error(char contour[16], char grille[4][4]);

void	ft_check_num_3_l(char contour[16], char grille[4][4])
{
	int i;
	int error;

	error = 0;
	i = 12;
	while (i != 16)
	{
		if (contour[i] == '3' && contour[i - 4] == '2')
		{
			if (grille[i][1] != '0' && grille[i][1] != '4')
				error = 1;
			grille[i][1] = 4;
		}
		i++;
	}
	if (error == 0)
		init_error(contour, grille);
	else
		ft_error();

}

void	ft_check_num_3_r(char contour[16], char grille[4][4])
{
	int i;
	int error;

	error = 0;
	i = 8;
	while (i != 12)
	{
		if (contour[i] == '3' && contour[i + 4] == '2')
		{
			if (grille[i][2] != '0' && grille[i][2] != '4')
				error = 1;
			grille[i][2] = 4;
		}
		i++;
	}
	if (error == 0)
		ft_check_num_3_r(contour, grille);
	else
		ft_error();

}

void	ft_check_num_3_d(char contour[16], char grille[4][4])
{
	int i;
	int error;

	error = 0;
	i = 4;
	while (i != 8)
	{
		if (contour[i] == '3' && contour[i - 4] == '2')
		{
			if (grille[1][i] != '0' && grille[1][i] != '4')
				error = 1;
			grille[1][i] = 4;
		}
		i++;
	}
	if (error == 0)
		ft_check_num_3_l(contour, grille);
	else
		ft_error();

}

void	ft_check_num_3_u(char contour[16], char grille[4][4])
{
	int i;
	int error;

	error = 0;
	i = 0;
	while (i != 4)
	{
		if (contour[i] == '3' && contour[i + 4] == '2')
		{
			if (grille[2][i] != '0' && grille[2][i] != '4')
				error = 1;
			grille[2][i] = 4;
		}
		i++;
	}
	if (error == 0)
		ft_check_num_3_d(contour, grille);
	else
		ft_error();
}
