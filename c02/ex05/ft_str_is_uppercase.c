/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_str_is_uppercase.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/04 16:39:23 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/04 19:07:38 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int i;
	int retourne;
	int j;

	i = 0;
	retourne = 1;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[j] != '\0')
		{
			if (!(str[i] < 91 && str[i] > 64))
				retourne = 0;
			j++;
		}
		i++;
	}
	return (retourne);
}
