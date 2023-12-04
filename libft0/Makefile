# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/16 15:48:52 by lbehr             #+#    #+#              #
#    Updated: 2023/11/14 10:05:07 by lbehr            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = libft.a
SRC = ft_isalpha.c ft_memmove.c ft_memcmp.c ft_memchr.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_striteri.c ft_strmapi.c ft_itoa.c ft_split.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_strnstr.c ft_strdup.c ft_memmove.c ft_calloc.c ft_memcpy.c ft_strlcat.c ft_atoi.c ft_isascii.c ft_strlcpy.c ft_strrchr.c ft_bzero.c ft_isdigit.c ft_memset.c ft_strlen.c ft_tolower.c ft_isalnum.c ft_isprint.c ft_strchr.c ft_strncmp.c ft_toupper.c
FLAG = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)
RM = rm -f

all		:	$(NAME)

.c.o	:
	$(CC) $(FLAG) -c $< -o ${<:.c=.o}

$(NAME)	:	$(OBJ)
	ar rcs $@ $^
	ranlib $@

clean	:
	$(RM) $(OBJ)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all

.PHONY: all clean fclean re