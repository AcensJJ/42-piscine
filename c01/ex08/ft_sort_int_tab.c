/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sort_int_tab.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/02 15:44:07 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 17:59:24 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_change(int i, int j, int *tab)
{
	int a;
	int b;

	a = tab[i];
	b = tab[j];
	tab[i] = b;
	tab[j] = a;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (i != size)
	{
		if (tab[i] > tab[j])
		{
			ft_change(i, j, tab);
			i = 0;
			j = 1;
		}
		else
		{
			i++;
			j++;
		}
	}
}
