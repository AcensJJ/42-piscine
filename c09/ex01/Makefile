SRCS		= ./srcs/ft_putchar.c \ 
				./srcs/ft_swap.c \
				./srcs/ft_putstr.c \
				./srcs/ft_strlen.c \
				./srcs/ft_strcmp.c

INCLUDES	= ./includes/ft.h

OBJS		= ft_putchar.o \ 
				ft_swap.o \
				ft_putstr.o \
				ft_strlen.o \
				ft_strcmp.o

CC			= gcc
RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

${NAME}:	${CC} ${CFLAGS} ${OBJS} -I ${INCLUDES}
			ar rc libft.a ${OBJS} 

all :		${NAME}

clean:
			${RM} ./srcs/ft_putchar.o \ 
				./srcs/ft_swap.o \
				./srcs/ft_putstr.o \
				./srcs/ft_strlen.o \
				./srcs/ft_strcmp.o

fclean:		clean
			${RM} libft.a

re:			fclean all

.PHONY:		all clean fclean re