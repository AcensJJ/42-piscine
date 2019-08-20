/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   multi.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rmazars <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/18 17:41:14 by rmazars      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 17:47:51 by rmazars     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

void	diz(long nbr)
{
	long dizaine;
	long unite;

	dizaine = (nbr / 10) * 10;
	unite = nbr % 10;
	read_dict(dizaine);
	if (unite != 0)
	{
		write(1, " ", 1);
		separateur(unite);
	}
}

void	cent(long nbr, long div)
{
	long digit_g;
	long autre;

	digit_g = nbr / div;
	autre = nbr % div;
	read_dict(digit_g);
	write(1, " ", 1);
	read_dict(div);
	if (autre != 0)
	{
		write(1, " ", 1);
		separateur(autre);
	}
}

void	mille(long nbr)
{
	long digit_g;
	long autre;

	digit_g = nbr / 1000;
	autre = nbr % 1000;
	separateur(digit_g);
	write(1, " ", 1);
	read_dict(1000);
	if (autre != 0)
	{
		write(1, " ", 1);
		separateur(autre);
	}
}

void	million(long nbr)
{
	long digit_g;
	long autre;

	digit_g = nbr / 1000000;
	autre = nbr % 1000000;
	separateur(digit_g);
	write(1, " ", 1);
	read_dict(1000000);
	if (autre != 0)
	{
		write(1, " ", 1);
		separateur(autre);
	}
}

void	billion(long nbr)
{
	long digit_g;
	long autre;

	digit_g = nbr / 1000000000;
	autre = nbr % 1000000000;
	separateur(digit_g);
	write(1, " ", 1);
	read_dict(1000000000);
	if (autre != 0)
	{
		write(1, " ", 1);
		separateur(autre);
	}
}
