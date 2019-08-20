/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 16:47:21 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/06 14:40:10 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (to_find[0] != '\0')
	{
		while (str[i] != '\0')
		{
			j = 0;
			while (str[i + j] == to_find[j] && to_find[j] != '\0')
			{
				if (to_find[j + 1] == '\0' && str[i + j] == to_find[j])
					return (&str[i]);
				j++;
			}
			i++;
		}
		return (0);
	}
	else
		return (&str[0]);
}
