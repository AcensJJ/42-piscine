# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/08/21 23:37:06 by matbois      #+#   ##    ##    #+#        #
#    Updated: 2019/08/22 11:30:57 by jacens      ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = bsq

SRCS = main.c\
	   map.c\
	   atoi.c\
	   check.c\
	   map_2.c\
	   map_3.c\

OBJS = $(SRCS:.c=.o)

HD = rush.h

CC = gcc

RM = rm -f

$(NAME) : $(OBJS)
	$(CC) -o $@ $^

%.o : %.c
	$(CC) -c $<

all : $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
