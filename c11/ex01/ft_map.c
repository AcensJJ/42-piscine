/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_map.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/21 16:08:56 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/22 11:48:58 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	char	*new;

	if (!(new = malloc(sizeof(char) * length)))
		return (0);
	i = -1;
	while (++i <= length)
		new[i] = f(tab[i]);
	return (new);
}
