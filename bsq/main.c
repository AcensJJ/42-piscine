/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: matbois <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/19 11:33:38 by matbois      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 23:40:31 by matbois     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "bsq.h"

void	ft_init_1(int i_x_y_size[4], int argc, char **argv)
{
	i_x_y_size[0] = 0;
	if (argc == 1)
	{
		i_x_y_size[0] = -1;
		ft_print_map(CACHE);
		argv[0] = CACHE;
	}
}

int		ft_main_1(int i_x_y_size[4], int argc, char **argv, int square[3])
{
	char			*buffer;
	char			symbols[3];
	int				h_l[2];
	unsigned int	**tab;
	char			*first_line;
	
	argc = argc + 1;
	argc = argc - 1;
	first_line = 0;
	if (ft_first_line(argv[i_x_y_size[0]], symbols, h_l))
		return (write(1, "oRrEuR MaP\n", 11));
	if (ft_check_symbols(symbols))
		return (write(1, "error symbols\n", 14));
	if ((i_x_y_size[3] = ft_map_size(argv[i_x_y_size[0]])) == 0)
		return (write(1, "eror size 0\n", 12));
	buffer = ft_open_map(argv[i_x_y_size[0]], i_x_y_size[3]);
	if (ft_check_map(buffer, first_line, h_l, symbols))
	{
		free(buffer);
		return (write(1, "oRrEuR MaP\n", 11));
	}
	tab = ft_create_tab(buffer, h_l, symbols);
	//ft_show_buffer_fast(buffer, i_x_y_size[3]);
	ft_check_multi_square(tab, i_x_y_size, h_l, square);
	ft_modifie_buffer(buffer, h_l, square, symbols);
	ft_show_buffer_fast(buffer, i_x_y_size[3]);
	free(buffer);
	return (0);
}

int		main(int argc, char **argv)
{
	int i_x_y_size[4];
	int square[3];

	ft_init_1(i_x_y_size, argc, argv);
	while (++i_x_y_size[0] < argc)
	{
		if (i_x_y_size[0] > 1)
			write(1, "\n", 1);
		i_x_y_size[1] = 0;
		i_x_y_size[2] = 0;
		square[0] = 0;
		square[1] = 0;
		square[2] = 0;
		if (ft_main_1(i_x_y_size, argc, argv, square))
			continue;
	}
	return (0);
}
