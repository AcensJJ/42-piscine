/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   map_2.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: matbois <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/21 23:11:53 by matbois      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 23:12:35 by matbois     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "bsq.h"

int			ft_first_line_size(char *path_map)
{
	int		fd;
	int		size;
	char	buffer[1];

	size = 0;
	if ((fd = open(path_map, O_RDONLY)) < 0)
		return (0);
	while (read(fd, buffer, 1) > 0)
	{
		if (*buffer == '\n')
			break ;
		size++;
	}
	if (*buffer != '\n' || size < 4)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (size);
}

int			ft_number_line(char *str_line, int h_l[2], int size)
{
	int		i;
	char	c;

	i = -1;
	while (++i < size - 3)
		if (str_line[i] < '0' || str_line[i] > '9')
			return (1);
	c = str_line[size - 3];
	str_line[size - 3] = '\0';
	h_l[0] = ft_atoi(str_line);
	str_line[size - 3] = c;
	if (h_l[0] < 1)
		return (1);
	return (0);
}

void		ft_get_symbols(char *str_line, char symbols[3], int size)
{
	symbols[0] = str_line[size - 3];
	symbols[1] = str_line[size - 2];
	symbols[2] = str_line[size - 1];
}

int			ft_get_first_line(char *path_map, char *str_line, int size)
{
	int		i;
	int		fd;
	char	buffer[1];

	i = -1;
	if ((fd = open(path_map, O_RDONLY)) < 0)
		return (1);
	while (++i < size)
	{
		read(fd, buffer, 1);
		str_line[i] = *buffer;
	}
	close(fd);
	return (0);
}

char		*ft_print_map(char *path_map)
{
	int		fd;
	int		jjj;
	char	buffer[BUFFER_SIZE];

	fd = open(path_map, O_WRONLY | O_CREAT | O_TRUNC);
	while ((jjj = read(0, buffer, BUFFER_SIZE)) > 0)
		write(fd, buffer, jjj);
	close(fd);
	return (path_map);
}
