/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   testreaddico.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: llongi <llongi@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/17 17:38:00 by llongi       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 18:53:23 by rmazars     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

char	*read_one_line_dict(int fd)
{
	int		sz;
	char	*c;
	char	*tab;
	int		i;
	int		end;

	i = 0;
	end = 0;
	tab = (char *)malloc(sizeof(char) * 1000);
	c = (char *)malloc(sizeof(char) * 1000);
	while (!end)
	{
		sz = read(fd, c, 1);
		tab = ft_strcat(tab, c);
		if (ft_strcmp(c, "\n") == 0)
			end = 1;
	}
	free(c);
	return (tab);
}

int		size_dico(void)
{
	int		sz;
	int		fds;
	int		i;

	sz = 1;
	i = 0;
	fds = open("numbers.dict.txt", O_RDONLY);
	while (sz == 1)
	{
		i++;
		sz = read_one_line_dict2(fds);
	}
	return (i);
}

int		in_dico(long nbr)
{
	int		fd;
	char	*tab;
	long	nbr1;
	int		len;
	int		i;

	len = size_dico();
	tab = (char *)malloc(sizeof(char) * 1000);
	fd = open("numbers.dict.txt", O_RDONLY);
	nbr1 = ft_atoi(tab);
	ft_putstr(tab);
	i = 0;
	while (nbr1 != nbr && i < len - 1)
	{
		i++;
		tab = read_one_line_dict(fd);
		nbr1 = ft_atoi(tab);
	}
	if (nbr1 == nbr && get_new_neb(nbr))
		return (1);
	else
		return (0);
}

int		read_dict(long nbr)
{
	int		fd;
	char	*tab;

	tab = (char *)malloc(sizeof(char) * 1000);
	fd = open("numbers.dict.txt", O_RDONLY);
	if (nbr == 0)
	{
		tab = read_one_line_dict(fd);
		tab = read_after(tab);
		ft_putstr(tab);
	}
	else
	{
		while (ft_atoi(tab) != nbr)
			tab = read_one_line_dict(fd);
		tab = read_after(tab);
		ft_putstr(tab);
	}
	free(tab);
	close(fd);
	return (1);
}
