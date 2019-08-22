NAME = do-op

SRCS = main.c\
	   ft_atoi.c\
	   ft_putnbr.c\
	   ft_caract.c\
	   ft_caract2.c

OBJS = $(SRCS:.c=.o)

CC = gcc -Wall -Wextra -Werror

RM = rm -f

$(NAME) : $(OBJS)
	@$(CC) -o $@ $^

%.o : %.c
	@$(CC) -c $<

all : $(NAME)

clean :
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) $(NAME)
