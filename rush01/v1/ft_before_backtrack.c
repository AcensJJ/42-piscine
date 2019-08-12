/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_before_backtrack.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 16:17:08 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 16:17:10 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void    nb_4_col_u(int y, char grille[4][4], int *error2);

void    nb_4_col_d(int y, char grille[4][4], int *error2);

void    nb_1_col_u(int y, int x, char grille[4][4], int *error2);

void    nb_1_col_d(int y, int x, char grille[4][4], int *error2);

void    nb_4_row_l(int x, char grille[4][4], int *error2);

void    nb_4_row_r(int x, char grille[4][4], int *error2);

void    nb_1_row_l(int y, int x, char grille[4][4], int *error2);

void    nb_1_row_r(int y, int x, char grille[4][4], int *error2);

void	ft_check_before_row_r(char contour[16], char grille[4][4])
{
	int i;
	int error2[1];

	*error2 = 0;
	i = 12;
	while (i != 16)
	{
		if (contour[i] == '4')
			nb_4_row_r(3, grille, error2);
		if (contour[i] == '1')
			nb_1_row_r(i - 13, 3, grille, error2);
		i++;
	}
	// if (*error2 == 0)
	// 	//ft_(contour, grille);
	// else
	// 	ft_error();	
}

void	ft_check_before_row_l(char contour[16], char grille[4][4])
{
	int i;
	int error2[1];

	*error2 = 0;
	i = 8;
	while (i != 12)
	{
		if (contour[i] == '4')
			nb_4_row_l(2, grille, error2);
		if (contour[i] == 1)
			nb_1_row_l(i - 9, 2, grille, error2);
		i++;
	}
	if (*error2 == 0)
		ft_check_before_row_r(contour, grille);
	else
		ft_error();	
}

void	ft_check_before_col_d(char contour[16], char grille[4][4])
{
	int i;
	int error2[1];

	*error2 = 0;
	i = 4;
	while (i != 8)
	{
		if (contour[i] == '4')
			nb_4_col_d(i - 5, grille, error2);
		if (contour[i] == '1')
			nb_1_col_d(i - 5, 1, grille, error2);
		i++;
	}
	if (*error2 == 0)
		ft_check_before_row_l(contour, grille);
	else
		ft_error();	
}

void	ft_check_before_col_u(char contour[16], char grille[4][4])
{
	int i;
	int error2[1];

	*error2 = 0;
	i = 0;
	while (i != 4)
	{
		if (contour[i] == '4')
			nb_4_col_u(i - 1, grille, error2);
		if (contour[i] == '1')
			nb_1_col_u(i - 1, 0, grille, error2);
		i++;
	}
	if (*error2 == 0)
		ft_check_before_col_d(contour, grille);
	else
		ft_error();	
}
