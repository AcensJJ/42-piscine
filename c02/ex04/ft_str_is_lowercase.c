/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_str_is_lowercase.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 18:13:30 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 18:14:33 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
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
			if (!(str[i] < 123 && str[i] > 96))
				retourne = 0;
			j++;
		}
		i++;
	}
	return (retourne);
}
