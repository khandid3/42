# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdomingu <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/17 10:15:43 by rdomingu          #+#    #+#              #
#    Updated: 2021/12/17 11:56:42 by rdomingu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	libft.a
HEAD	=	libft.h

SRC	=	ft_isalpha.c \
	  	ft_isdigit.c \
	  	ft_isalnum.c \
	  	ft_isascii.c \
	 	ft_isprint.c \
	  	ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
	  	ft_memcpy.c \
	  	ft_memmove.c \
	  	ft_strlcpy.c \
	  	ft_strlcat.c \
	  	ft_toupper.c \
	  	ft_tolower.c \
	  	ft_strchr.c \
	  	ft_strrchr.c \
	  	ft_strncmp.c \
	  	ft_memchr.c \
	  	ft_memcmp.c \
	  	ft_strnstr.c \
	  	ft_atoi.c \
	  	ft_calloc.c \
	  	ft_strdup.c \
	  	ft_substr.c \
	  	ft_strjoin.c \
	  	ft_strtrim.c \
	  	ft_split.c \
	  	ft_itoa.c \
	  	ft_strmapi.c \
	  	ft_striteri.c \
	  	ft_putchar_fd.c \
	  	ft_putstr_fd.c \
	  	ft_putendl_fd.c \
	  	ft_putnbr_fd.c

OBJS	=	$(SRC:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

all 	:	$(NAME)

$(NAME)	:	$(OBJS)
			ar rc $(NAME) $(OBJS)

clean 	:	
			@rm -rf $(OBJ)

fclean	:	clean
			@rm -rf $(NAME)

re 	:	fclean all

.PHONY	:	all clean fclean re
