# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/08 16:49:14 by rdomingu          #+#    #+#              #
#    Updated: 2022/03/08 17:10:50 by rdomingu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		libftprint.a

SRCS	=		ft_printf.c			\
				ft_putchar.c		\
				ft_putstr.c			\
				ft_hexa_x.c			\
				ft_hexa_xx.c		\
				ft_p.c				\
				ft_putnbr_d.c		\
				ft_putnbr_u.c

OBJS	=		$(SRCS:.c=.o)

CC		=		gcc

CFFLAGS	+=		-Wall -Wextra -Werror

RM		=		rm -f

all		:		$(NAME)

$(NAME)	:		$(OBJS)
					ar rcs $(NAME) $(OBJS)

$(OBJS)	:		%.o : %.c
					$(CC) -c $(CFLAGS) $< -o $@

clean	:		
				$(RM) $(OBJS)

fclean	:		clean
					$(RM) $(NAME)

re		:		fclean all

a.out	:		$(NAME)
					gcc -o $@ $(CFLAGS) $(NAME)

.PHONY	:		all clean fclean re
