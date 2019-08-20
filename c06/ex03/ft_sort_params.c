/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sort_params.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/13 17:47:06 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/13 17:47:09 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_change(char **s1, char **s2)
{
	char *temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	c = s1[i] - s2[i];
	return (c);
}

void	ft_sort_tab(int ac, char **ag)
{
	int i;
	int j;
	int c;

	i = 1;
	j = 2;
	while (j != ac)
	{
		c = ft_strcmp(ag[i], ag[j]);
		if (c > 0)
		{
			ft_change(&ag[i], &ag[j]);
			i = 1;
			j = 2;
		}
		else
		{
			i++;
			j++;
		}
	}
}

void	ft_print_programs(char *ag)
{
	int i;

	i = 0;
	while (ag[i] != '\0')
	{
		write(1, &ag[i], 1);
		i++;
	}
}

int		main(int ac, char **ag)
{
	int i;

	if (ac > 1)
		ft_sort_tab(ac, ag);
	i = 1;
	while (i != ac)
	{
		ft_print_programs(ag[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
