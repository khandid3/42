# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/08 16:49:14 by rdomingu          #+#    #+#              #
#    Updated: 2022/05/04 18:03:03 by rdomingu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		libftprintf.a

SRCS	=		ft_printf.c			\
				ft_putchar.c		\
				ft_putstr.c			\
				ft_hexa_x.c			\
				ft_hexa_xx.c		\
				ft_p.c				\
				ft_putnbr_d.c		\
				ft_putnbr_u.c

OBJS			= $(SRCS:.c=.o)


FLAGS 			= -Wall -Wextra -Werror -I.

all : 			$(NAME)
$(NAME) : 		$(OBJS)
				ar src  $(NAME) $(OBJS)
%.o: %.c
				gcc -c $(FLAGS) -o $@ $^

clean :
				/bin/rm -rf *.o

fclean : clean
				/bin/rm -rf $(NAME)

re : fclean all
