/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/14 10:59:28 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/14 16:29:53 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strcpy2(char *dest, char *src)
{
	int		i;
	int		j;
	char	*txt;

	txt = malloc(sizeof(char) * 5);
	txt = ft_strcpy(txt, ".txt");
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	j = -1;
	while (txt[++j] != '\0')
	{
		dest[i] = txt[j];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
