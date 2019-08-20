/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_init_grille.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 16:18:11 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 16:18:12 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes.h"

void    ft_init_grille(char contour[16])
{
    char    grille[4][4];
    int     x;
    int     y;

    x = 0;
    y = 0;
    while (x != 4)
    {
        y = 0;
        while (y != 4)
        {
            grille[x][y] = '0';
            y++;
        }
        x++;
    }
    init_check_u(contour, grille);
}
