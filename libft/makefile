SRCS = ft_islpha.c \
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
	  ft_strdup.c

OBJS	=	${SRCS:.c=.o}

NAME	=	a.out

CC		=	cc

CFLAGS	+=	-Wall -Wextra -Werror

.c.o	=	
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

LIB = -L. -lmalib

RM = rm -f

CLEAN = clean

all : 
		@make $(NAME)

$(NAME): $(OBJS)
		$(CC) -o ${NAME} $(OBJS) $(LIB)

clean : $(RM) $(OBJS) 
	@$(CLEAN)

fclean:	clean
		$(RM) ${NAME}

re : fclean all

.PHONY:	all clean fclean re





		
	
