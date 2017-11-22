# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfusaro <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/12 08:16:38 by cfusaro           #+#    #+#              #
#    Updated: 2017/11/22 09:36:17 by cfusaro          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		libft.a
CFLAGS +=	-Wall -Wextra -Werror -Iinclude
# **************************************************************************** #
# char                                                                         #
# **************************************************************************** #
SRC +=	ft_isalpha.c
SRC +=	ft_isdigit.c
SRC +=	ft_isalnum.c
SRC +=	ft_isascii.c
SRC +=	ft_isprint.c
SRC +=	ft_toupper.c
SRC +=	ft_tolower.c

# **************************************************************************** #
# mem                                                                          #
# **************************************************************************** #
SRC +=	ft_memset.c
SRC +=	ft_bzero.c
SRC +=	ft_memcpy.c
SRC +=	ft_memccpy.c
SRC +=	ft_memmove.c
SRC +=	ft_memchr.c
SRC +=	ft_memcmp.c

SRC +=	ft_memalloc.c
SRC +=	ft_memdel.c
# **************************************************************************** #
# put                                                                          #
# **************************************************************************** #
SRC +=	ft_putchar.c
SRC +=	ft_putchar_fd.c
SRC +=	ft_putendl.c
SRC +=	ft_putendl_fd.c
SRC +=	ft_putnbr.c
SRC +=	ft_putnbr_fd.c
SRC +=	ft_putstr.c
SRC +=	ft_putstr_fd.c
# **************************************************************************** #
# str                                                                          #
# **************************************************************************** #
SRC +=	ft_strlen.c
SRC +=	ft_strdup.c
SRC +=	ft_strcpy.c
SRC +=	ft_strncpy.c
SRC +=	ft_strcat.c
SRC +=	ft_strncat.c
SRC +=	ft_strlcat.c
SRC +=	ft_strchr.c
SRC +=	ft_strrchr.c
SRC +=	ft_strstr.c
SRC +=	ft_strnstr.c
SRC +=	ft_strcmp.c
SRC +=	ft_strncmp.c

SRC +=	ft_strnew.c
SRC +=	ft_strdel.c
SRC +=	ft_strclr.c
SRC +=	ft_striter.c
SRC +=	ft_striteri.c
SRC +=	ft_strmap.c
SRC +=	ft_strmapi.c
SRC +=	ft_strequ.c
SRC +=	ft_strnequ.c
SRC +=	ft_strsub.c
SRC +=	ft_strjoin.c
SRC +=	ft_strtrim.c
SRC +=	ft_strsplit.c
# **************************************************************************** #
# integer                                                                      #
# **************************************************************************** #
SRC +=	ft_atoi.c
SRC +=	ft_itoa.c
# **************************************************************************** #
# list                                                                         #
# **************************************************************************** #
SRC +=	ft_lstnew.c
SRC +=	ft_lstdelone.c
SRC +=	ft_lstdel.c
SRC +=	ft_lstadd.c
SRC +=	ft_lstiter.c
SRC +=	ft_lstmap.c
# **************************************************************************** #
# add                                                                          #
# **************************************************************************** #
SRC +=	ft_fibonacci.c
SRC +=	ft_find_next_prime.c
SRC +=	ft_is_prime.c
SRC +=	ft_iterative_factorial.c
SRC +=	ft_iterative_power.c
SRC +=	ft_recursive_factorial.c
SRC +=	ft_recursive_power.c
SRC +=	ft_sqrt.c
SRC +=	ft_foreach.c
SRC +=	ft_count_if.c
SRC +=	ft_count_words.c
SRC +=	ft_isspace.c
SRC +=	ft_strrev.c

OBJS = $(SRC:.c=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) -rcs $(NAME) $?

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
