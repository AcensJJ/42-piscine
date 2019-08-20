EXEC		= rush-02

SRCS		= main.c ft_atoi.c traitement.c ft_str1.c ft_strcpy2.c ft_strlen.c multi.c read_dico.c read_dico_fct.c try_nbr.c

INCLUDES	= ft.h

OBJS		= main.o ft_atoi.o traitement.o ft_str1.o ft_strcpy2.o ft_strlen.o multi.o read_dico.o read_dico_fct.o try_nbr.o

CC			= gcc
RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

FCVO		= -c

NAME		= ${EXEC}

all :		${NAME}

${NAME}:	main.o ft_atoi.o traitement.o ft_str1.o ft_strcpy2.o ft_strlen.o multi.o read_dico.o read_dico_fct.o try_nbr.o
			ar rc lib.a ${OBJS} ${INCLUDES}
			gcc lib.a -o ${EXEC}

main.o :  main.c
			${CC} ${FCVO} ${CFLAGS} -o $@ $<

ft_atoi.o :  ft_atoi.c
			${CC} ${FCVO} ${CFLAGS} -o $@ $<

traitement.o :  traitement.c
			${CC} ${FCVO} ${CFLAGS} -o $@ $<

ft_str1.o :  ft_str1.c
			${CC} ${FCVO} ${CFLAGS} -o $@ $<

ft_strcpy2.o :  ft_strcpy2.c
			${CC} ${FCVO} ${CFLAGS} -o $@ $<

ft_strlen.o :  ft_strlen.c
			${CC} ${FCVO} ${CFLAGS} -o $@ $<

multi.o :  multi.c
			${CC} ${FCVO} ${CFLAGS} -o $@ $<

read_dico.o :  read_dico.c
			${CC} ${FCVO} ${CFLAGS} -o $@ $<

read_dico_fct.o :  read_dico_fct.c
			${CC} ${FCVO} ${CFLAGS} -o $@ $<

try_nbr.o :  try_nbr.c
			${CC} ${FCVO} ${CFLAGS} -o $@ $<

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${EXEC} lib.a

re:			fclean all

.PHONY:		all clean fclean re