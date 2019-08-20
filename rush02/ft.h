/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft.h                                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/18 13:45:23 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 18:57:56 by rmazars     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

int		read_one_line_dict2(int fd);
char	*read_after(char *str);
char	*copy_start_end(char *str, int start);
int		read_dict(long nbr);
int		get_new_neb(long nbr);
int		in_dico(long nbr);
long	ft_atoi(char *str);
char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);
void	separateur(long nbr);
char	*ft_strcpy2(char *dest, char *src);
char	*ft_strdup(char *src);
char	*ft_strcpy(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);
char	*ft_strcat(char *dest, char *src);
void	diz(long nbr);
void	cent(long nbr, long div);
void	mille(long nbr);
void	million(long nbr);
void	billion(long nbr);

#endif
