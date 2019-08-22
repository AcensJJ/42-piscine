/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sort_string_tab.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/22 17:49:57 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/22 17:49:58 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return ((int)s1[i] - s2[i]);
}

void	ft_sort_int_tab(char **tab, int size)
{
	int		i;
	int		j;
	int		k;
	char	*swap;

	i = -1;
	while (++i < size)
	{
		k = i;
		j = i;
		while (++j < size)
			if (ft_strcmp(tab[j], tab[k]) < 0)
				k = j;
		swap = tab[i];
		tab[i] = tab[k];
		tab[k] = swap;
	}
}

void	ft_sort_string_tab(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
		i++;
	ft_sort_int_tab(tab, i);
}
