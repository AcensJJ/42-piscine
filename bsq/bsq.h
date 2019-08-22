/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   bsq.h                                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: matbois <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/19 12:01:52 by matbois      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 23:34:39 by matbois     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _BSQ_H
# define _BSQ_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

# define PATH_MAP "map.map"
# define CACHE ".map"
# define BUFFER_SIZE 15000

//////////////////
///////
//
# include <stdio.h>
# include <string.h>
//
//////
//////////////////

int			ft_first_line_size(char *path_map);
int			ft_number_line(char *str_line, int h_l[2], int size);
void		ft_get_symbols(char *str_line, char symbols[3], int size);
int			ft_get_first_line(char *path_map, char *str_line, int size);
char		*ft_print_map(char *path_map);
int			ft_first_line(char *path_map, char symbols[3], int h_l[2]);
int			ft_map_size(char *path_map);
char		*ft_open_map(char *path_map, int size);
int			ft_check_map_25(char *buffer, int *i, int *height, char symbols[3]);
int			ft_check_map(char *buffer, char *first_line,
				int h_l[2], char symbols[3]);
int			ft_check_symbols(char symbols[3]);
int			ft_modifie_buffer(char *buffer, int h_l[2],
				int square[3], char symbols[3]);
void		ft_show_buffer_fast(char *map, int size);
int			ft_create_tab_25(char *buffer, int i_j_k_l_il_hh_ll[7],
				unsigned int **tab, char symbols[3]);
unsigned int	**ft_create_tab(char *buffer, int h_l[2],
				char symbols[3]);
int     ft_check_map(char *buffer, char *first_line, int h_l[2], char symbols[3]);
int ft_check_symbols(char symbols[3]);
char    *ft_whitespace_sign(char *str, int *sign);
int     ft_atoi(char *str);
int				ft_check_block(unsigned int **tab, int y, int x, int start);
int				ft_check_multi_block(unsigned int **tab, int xxx, int y,
		int h_l[2]);
int				ft_check_square(unsigned int **tab, int i_x_y_size[4], int h_l[2],
		int square[3]);
int				ft_check_multi_square(unsigned int **tab, int i_x_y_size[4],
		int h_l[2], int square[3]);

#endif
