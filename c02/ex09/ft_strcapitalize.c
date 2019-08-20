/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcapitalize.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/04 19:11:19 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/04 19:11:21 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int first;

	i = 0;
	first = 1;
	while (str[i] != '\0')
	{
		if ((str[i] > 64 && str[i] < 91) && first == 0)
			str[i] += 32;
		if ((str[i] > 96 && str[i] < 123) && first == 1)
			str[i] -= 32;
		first = 0;
		if (!((str[i] > 47 && str[i] < 58) || (str[i] > 64 && str[i] < 91) ||
		(str[i] > 96 && str[i] < 123)))
			first = 1;
		i++;
	}
	return (str);
}
