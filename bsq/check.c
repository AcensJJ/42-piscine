/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   check.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: matbois <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/21 09:57:48 by matbois      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 23:27:39 by matbois     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "bsq.h"

int		ft_check_block(unsigned int **tab, int y, int x, int start)
{
	int i;

	if (tab[x][y] == 0)
		return (32 - start);
	i = -1;
	i = start - 1;
	while (++i <= 31)
		if ((tab[x][y] & 1 << i) != 0)
			return (i - start);
	return (32 - start);
}

int		ft_check_multi_block(unsigned int **tab, int xxx, int y, int h_l[2])
{
	int x;
	int start;
	int ret;
	int total;

	x = 2000;
	start = 2000;
	x = xxx / 32;
	start = xxx % 32;
	total = 0;
	while (((ret = ft_check_block(tab, x, y, start)) + start) == 32)
	{
		total += ret;
		start = 0;
		if (x == h_l[1] / 32)
			break ;
		else
			x++;
	}
	total += ret;
	if (total == 0)
		return (ret);
	return (total);
}

int		ft_check_square(unsigned int **tab, int i_x_y_size[4],
		int h_l[2], int square[3])
{
	int i_y;
	int ret;
	int max_x;

	i_y = 0;
	max_x = ft_check_multi_block(tab, i_x_y_size[1], i_x_y_size[2], h_l);
	while (i_x_y_size[2] + i_y < h_l[0] &&
			(ret = ft_check_multi_block(tab, i_x_y_size[1],
										i_x_y_size[2] + i_y, h_l)) >
			square[2] && i_y < max_x)
	{
		if (ret < max_x)
			max_x = ret;
		if (i_y < ret)
			i_y++;
	}
	if (ret < max_x)
		max_x = ret;
	if (i_y > square[2])
	{
		square[0] = i_x_y_size[1];
		square[1] = i_x_y_size[2];
		square[2] = i_y;
	}
	return (max_x);
}

int		ft_check_multi_square(unsigned int **tab, int i_x_y_size[4],
		int h_l[2], int square[3])
{
	i_x_y_size[2] = -1;
	while (++i_x_y_size[2] < h_l[0])
	{
		i_x_y_size[1] = 0;
		while (i_x_y_size[1] < h_l[1])
			i_x_y_size[1] += ft_check_square(tab, i_x_y_size, h_l, square) + 1;
	}
	return (0);
}
