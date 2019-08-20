/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_before_row_backtrack.c                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 16:17:23 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 16:17:24 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes.h"

void    nb_4_row_l(int x, char grille[4][4], int *error2)
{
    int y;

    y = 0;
    while (y != 4)
    {
        if (grille[x][y] != '0' && grille[x][y] != y + 1 + '0')
            *error2 = 1;
        grille[x][y] = y + 1 + '0';
        y++;
    }
}

void    nb_4_row_r(int x, char grille[4][4], int *error2)
{
    int y;

    y = 4;
    while (y != 0)
    {
        if (grille[x][y - 1] != '0' && grille[x][y - 1] != y + '0')
            *error2 = 1;
        grille[x][y - 1] = y + '0';
        y--;
    }
}
