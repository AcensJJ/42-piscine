/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   map_3.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: matbois <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/21 23:12:44 by matbois      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 23:13:12 by matbois     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "bsq.h"

int			ft_first_line(char *path_map, char symbols[3], int h_l[2])
{
	int		i;
	int		fd;
	int		size;
	char	buffer[1];
	char	*str_line;

	i = -1;
	if ((size = ft_first_line_size(path_map)) == 0)
		return (1);
	if ((fd = open(path_map, O_RDONLY)) < 0)
		return (1);
	str_line = malloc(sizeof(char) * (size + 1));
	ft_get_first_line(path_map, str_line, size);
	str_line[i] = '\0';
	if (ft_number_line(str_line, h_l, size))
		return (1);
	ft_get_symbols(str_line, symbols, size);
	close(fd);
	return (0);
}

int			ft_map_size(char *path_map)
{
	int		fd;
	int		size;
	int		length;
	char	buffer[1];

	size = 0;
	fd = open(path_map, O_RDONLY);
	*buffer = '@';
	while (*buffer != '\n')
		read(fd, buffer, 1);
	while ((length = read(fd, buffer, 1)) > 0)
		size += length;
	close(fd);
	return (size);
}

char		*ft_open_map(char *path_map, int size)
{
	int		i;
	int		fd;
	char	*buffer;

	fd = open(path_map, O_RDONLY);
	buffer = malloc(sizeof(char) * 1);
	i = 0;
	while ((read(fd, buffer, 1)) > 0)
		if (*buffer == '\n')
			break ;
		else
			i++;
	free(buffer);
	buffer = malloc(sizeof(char) * (size + 1));
	read(fd, buffer, size);
	buffer[size] = '\0';
	close(fd);
	return (buffer);
}

int			ft_check_map_25(char *buffer, int *i, int *height, char symbols[3])
{
	*i = -1;
	*height = 0;
	if (*buffer == '\0')
		return (1);
	while (buffer[++*i])
		if (buffer[*i] == '\n')
			break ;
		else if (buffer[*i] != symbols[0] && buffer[*i] != symbols[1])
			return (1);
	return (0);
}

int			ft_check_map(char *buffer, char *first_line,
		int h_l[2], char symbols[3])
{
	int i;
	int height;
	int length;

	if (ft_check_map_25(buffer, &i, &height, symbols))
		return (1);
	height++;
	h_l[1] = i;
	while (buffer[++i])
	{
		if (buffer[i] == '\n')
		{
			if ((i - height) % (h_l[1]) != 0)
				return (1);
			height++;
		}
		else if (buffer[i] != symbols[0] && buffer[i] != symbols[1])
			return (1);
	}
	if (buffer[i - 1] != '\n')
		return (1);
	if (height != h_l[0])
		return (1);
	return (0);
}
