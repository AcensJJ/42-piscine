/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft.h                                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/22 12:32:24 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/22 13:18:06 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _FT_H
# define _FT_H
# include <unistd.h>

void	ft_print(char vtp);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
void	ft_plus(int nb1, int nb2);
void	ft_moins(int nb1, int nb2);
void	ft_fois(int nb1, int nb2);
void	ft_div(int nb1, int nb2);
void	ft_mod(int nb1, int nb2);
int		main(int ac, char **av);
#endif
