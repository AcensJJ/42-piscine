/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_before_col_backtrack.c                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 16:17:16 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 16:17:17 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes.h"

void    nb_4_col_u(int y, char grille[4][4], int *error2)
{
    int x;

    x = 0;
    while (x != 4)
    {
        if (grille[x][y] != '0' && grille[x][y] != x + 1 + '0')
            *error2 = 1;
        grille[x][y] = x + 1 + '0';
        x++;
    }
}

void    nb_4_col_d(int y, char grille[4][4], int *error2)
{
    int x;
    int count;

    x = 4;
    count = 1;
    while (x != 0)
    {
        if (grille[x - 1][y] != '0' && grille[x - 1][y] != count + '0')
            *error2 = 1;
        grille[x - 1][y] = x + '0';
        x--;
        count++;
    }
}

void    nb_1(int y, int x, char grille[4][4], int *error2)
{
    if (grille[x][y] != '0' && grille[x][y] != '4')
        *error2 = 1;
    grille[x][y] = '4';
}

