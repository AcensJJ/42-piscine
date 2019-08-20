/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_str_is_numeric.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 18:02:55 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 18:06:18 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
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
			if (!(str[i] < 58 && str[i] > 47))
				retourne = 0;
			j++;
		}
		i++;
	}
	return (retourne);
}
