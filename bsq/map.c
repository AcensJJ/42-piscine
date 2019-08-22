/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   map.c                                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: matbois <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/21 09:50:40 by matbois      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 23:39:46 by matbois     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "bsq.h"

int			ft_check_symbols(char symbols[3])
{
	if (symbols[0] == symbols[1] || symbols[0] == symbols[2] ||
			symbols[1] == symbols[2])
		return (1);
	return (0);
}

int			ft_modifie_buffer(char *buffer, int h_l[2],
		int square[3], char symbols[3])
{
	int i;
	int j;

	i = -1;
	while (++i < square[2])
	{
		j = -1;
		while (++j < square[2])
			buffer[(square[0] + j) + (square[1] + i) *
				(h_l[1] + 1)] = symbols[2];
	}
	return (0);
}

void		ft_show_buffer_fast(char *map, int size)
{
	write(1, map, size);
}

int			ft_create_tab_25(char *buffer, int i_j_k_l_il_hh_ll[7],
		unsigned int **tab, char symbols[3])
{
	i_j_k_l_il_hh_ll[2] = -1;
	tab[i_j_k_l_il_hh_ll[0]][i_j_k_l_il_hh_ll[1]] = 0;
	while (++i_j_k_l_il_hh_ll[2] < 32)
	{
		if (buffer[i_j_k_l_il_hh_ll[3]] == '\n')
		{
			i_j_k_l_il_hh_ll[2]--;
			i_j_k_l_il_hh_ll[3]++;
			return (1);
		}
		else if ((i_j_k_l_il_hh_ll[1] * 32) +
				i_j_k_l_il_hh_ll[2] >= i_j_k_l_il_hh_ll[6])
		{
			tab[i_j_k_l_il_hh_ll[0]][i_j_k_l_il_hh_ll[1]] |=
				1 << i_j_k_l_il_hh_ll[2];
			return (1);
		}
		else if (buffer[i_j_k_l_il_hh_ll[3]] == symbols[1])
			tab[i_j_k_l_il_hh_ll[0]][i_j_k_l_il_hh_ll[1]] |= 1 <<
				i_j_k_l_il_hh_ll[2];
		i_j_k_l_il_hh_ll[3]++;
	}
	return (0);
}

unsigned int	**ft_create_tab(char *buffer, int h_l[2],
		char symbols[3])
{
	int				i_j_k_l_il_hh_ll[7];
	unsigned int	**tab;

	i_j_k_l_il_hh_ll[5] = h_l[0];
	i_j_k_l_il_hh_ll[6] = h_l[1];
	i_j_k_l_il_hh_ll[3] = 0;
	i_j_k_l_il_hh_ll[0] = -1;
	i_j_k_l_il_hh_ll[4] = ((i_j_k_l_il_hh_ll[6] - 1) / 32) + 1;
	tab = malloc(sizeof(int *) * i_j_k_l_il_hh_ll[5]);
	while (++i_j_k_l_il_hh_ll[0] < i_j_k_l_il_hh_ll[5])
	{
		i_j_k_l_il_hh_ll[1] = -1;
		tab[i_j_k_l_il_hh_ll[0]] = malloc(sizeof(int) * i_j_k_l_il_hh_ll[4]);
		while (++i_j_k_l_il_hh_ll[1] < i_j_k_l_il_hh_ll[4])
			if (ft_create_tab_25(buffer, i_j_k_l_il_hh_ll, tab, symbols))
				continue ;
	}
	h_l[0] = i_j_k_l_il_hh_ll[5];
	h_l[1] = i_j_k_l_il_hh_ll[6];
	return (tab);
}
