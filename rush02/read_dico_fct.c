/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   read_dico_fct.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rmazars <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/18 18:35:40 by rmazars      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 18:57:15 by rmazars     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

char	*copy_start_end(char *str, int start)
{
	int		i;
	char	*tab;
	int		len;

	i = 0;
	len = ft_strlen(str);
	tab = malloc(sizeof(char) * len * 10000000);
	while (str[start + i + 1] != '\0')
	{
		tab[i] = str[start + i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	*read_after(char *str)
{
	int		i;
	char	*tab;

	i = 0;
	while (str[i] != ':')
		i++;
	i++;
	while (str[i] != ' ')
		i++;
	i++;
	tab = copy_start_end(str, i);
	return (tab);
}

int		read_one_line_dict2(int fd)
{
	int		sz;
	char	*c;
	char	*tab;
	int		i;
	int		end;

	c = (char *)malloc(sizeof(char) * 1000);
	tab = (char *)malloc(sizeof(char) * 1000);
	i = 0;
	end = 0;
	while (!end)
	{
		sz = read(fd, c, 1);
		tab = ft_strcat(tab, c);
		if (sz == 0)
			break ;
		if (ft_strcmp(c, "\n") == 0)
			end = 1;
	}
	free(c);
	free(tab);
	return (sz);
}
