NAME = do-op

SRCS = doop.c\
	   ft_operator.c

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
