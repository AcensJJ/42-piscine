/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultimate_range.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/14 10:59:41 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/14 10:59:43 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int *tab;

	size = max - min;
	*range = 0;
	if (min >= max)
		return (0);
	if (!(tab = malloc(sizeof(int) * size)))
		return (-1);
	while (min < --max + 1)
		tab[max - min] = max;
	*range = tab;
	return (size);
}
