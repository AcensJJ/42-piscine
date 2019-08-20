/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_power.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/08 17:04:16 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/08 17:04:17 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_power(int nb, int *nb2)
{
	*nb2 *= nb;
}

int		ft_iterative_power(int nb, int power)
{
	int i;
	int nb2;

	i = 1;
	nb2 = nb;
	if (power == 0)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	while (i != power)
	{
		ft_power(nb, &nb2);
		i++;
	}
	return (nb2);
}
