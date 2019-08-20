/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   traitement.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rmazars <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/18 18:25:04 by rmazars      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 18:26:51 by rmazars     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

void	separateur(long nbr)
{
	if (in_dico(nbr))
		read_dict(nbr);
	else if (nbr < 20)
	{
		read_dict(nbr);
	}
	else if (nbr < 100)
		diz(nbr);
	else if (nbr < 1000)
		cent(nbr, 100);
	else if (nbr < 1000000)
	{
		mille(nbr);
	}
	else if (nbr < 1000000000)
	{
		million(nbr);
	}
	else if (nbr < 1000000000000)
	{
		billion(nbr);
	}
	else
		write(1, "few zillion\n", 12);
}
