/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_range.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/14 10:59:35 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/14 10:59:36 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;

	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) * (max - min));
	while (min < --max + 1)
		tab[max - min] = max;
	return (tab);
}
