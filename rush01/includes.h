#ifndef HEADER_FILE
#define HEADER_FILE

#include <unistd.h>

void    nb_4_col_u(int y, char grille[4][4], int *error2);
void    nb_4_col_d(int y, char grille[4][4], int *error2);
void    nb_4_row_l(int x, char grille[4][4], int *error2);
void    nb_4_row_r(int x, char grille[4][4], int *error2);
void    nb_1(int y, int x, char grille[4][4], int *error2);
void	init_error(char contour[16], char grille[4][4]);
void	ft_check_num_u(char contour[16], char grille[4][4]);
void	ft_check_num_3_u(char contour[16], char grille[4][4]);
void	ft_check_corner_u(char contour[16], char grille[4][4]);
void	init_check_u(char contour[16], char grille[4][4]);
void	ft_check_before_col_u(char contour[16], char grille[4][4]);
int		ft_error(char a, char b);
void    ft_init_grille(char contour[16]);
void    ft_print_grille(char grille[4][4]);

#endif