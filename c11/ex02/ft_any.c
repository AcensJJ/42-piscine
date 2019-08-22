/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_any.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/21 16:08:29 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/22 11:49:05 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int i;

	i = -1;
	while (*tab[++i] != '\0')
		if (f(*tab[i]) != 0)
			return (1);
	return (0);
}