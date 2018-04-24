# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsalanga <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/16 10:40:30 by jsalanga          #+#    #+#              #
#    Updated: 2018/04/24 15:42:18 by jsalanga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
FLAGS=-W -Wall -Wextra -Werror

all: $(NAME)

$(NAME): ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o \
	ft_memchr.o ft_memcmp.o ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o \
	ft_strcat.o ft_strncat.o ft_strlcat.o ft_strchr.o ft_strrchr.o \
	ft_strstr.o ft_strnstr.o ft_strcmp.o ft_strncmp.o ft_atoi.o ft_isalpha.o \
	ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o \
	ft_tolower.o ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o \
	ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o \
	ft_strequ.o ft_strnequ.o ft_strsub.o ft_strjoin.o ft_strtrim.o \
	ft_strsplit.o ft_itoa.o ft_putchar.o ft_putstr.o ft_putendl.o ft_putnbr.o \
	ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_lstnew.o \
	ft_lstdelone.o ft_lstdel.o ft_lstadd.o ft_lstiter.o ft_lstmap.o \
	ft_countwords.o ft_lstinsert.o ft_lstrev.o ft_digits.o ft_lstaddend.o
	@ar rc $(NAME) ft*.o
	@ranlib $(NAME)

clean:
	@rm -f ft*.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

ft_memset.o: ft_memset.c
	@gcc -c $(FLAGS) ft_memset.c

ft_bzero.o: ft_bzero.c
	@gcc -c $(FLAGS) ft_bzero.c

ft_memcpy.o: ft_memcpy.c
	@gcc -c $(FLAGS) ft_memcpy.c

ft_memccpy.o: ft_memccpy.c
	@gcc -c $(FLAGS) ft_memccpy.c

ft_memmove.o: ft_memmove.c
	@gcc -c $(FLAGS) ft_memmove.c

ft_memchr.o: ft_memchr.c
	@gcc -c $(FLAGS) ft_memchr.c

ft_memcmp.o: ft_memcmp.c
	@gcc -c $(FLAGS) ft_memcmp.c

ft_strlen.o: ft_strlen.c
	@gcc -c $(FLAGS) ft_strlen.c

ft_strdup.o: ft_strdup.c
	@gcc -c $(FLAGS) ft_strdup.c

ft_strcpy.o: ft_strcpy.c
	@gcc -c $(FLAGS) ft_strcpy.c

ft_strncpy.o: ft_strncpy.c
	@gcc -c $(FLAGS) ft_strncpy.c

ft_strcat.o: ft_strcat.c
	@gcc -c $(FLAGS) ft_strcat.c

ft_strncat.o: ft_strncat.c
	@gcc -c $(FLAGS) ft_strncat.c

ft_strlcat.o: ft_strlcat.c
	@gcc -c $(FLAGS) ft_strlcat.c

ft_strchr.o: ft_strchr.c
	@gcc -c $(FLAGS) ft_strchr.c

ft_strrchr.o: ft_strrchr.c
	@gcc -c $(FLAGS) ft_strrchr.c

ft_strstr.o: ft_strstr.c
	@gcc -c $(FLAGS) ft_strstr.c

ft_strnstr.o: ft_strnstr.c
	@gcc -c $(FLAGS) ft_strnstr.c

ft_strcmp.o: ft_strcmp.c
	@gcc -c $(FLAGS) ft_strcmp.c

ft_strncmp.o: ft_strncmp.c
	@gcc -c $(FLAGS) ft_strncmp.c

ft_atoi.o: ft_atoi.c
	@gcc -c $(FLAGS) ft_atoi.c

ft_isalpha.o: ft_isalpha.c
	@gcc -c $(FLAGS) ft_isalpha.c

ft_isdigit.o: ft_isdigit.c
	@gcc -c $(FLAGS) ft_isdigit.c

ft_isalnum.o: ft_isalnum.c
	@gcc -c $(FLAGS) ft_isalnum.c

ft_isascii.o: ft_isascii.c
	@gcc -c $(FLAGS) ft_isascii.c

ft_isprint.o: ft_isprint.c
	@gcc -c $(FLAGS) ft_isprint.c

ft_toupper.o: ft_toupper.c
	@gcc -c $(FLAGS) ft_toupper.c

ft_tolower.o: ft_tolower.c
	@gcc -c $(FLAGS) ft_tolower.c

ft_memalloc.o: ft_memalloc.c
	@gcc -c $(FLAGS) ft_memalloc.c

ft_memdel.o: ft_memdel.c
	@gcc -c $(FLAGS) ft_memdel.c

ft_strnew.o: ft_strnew.c
	@gcc -c $(FLAGS) ft_strnew.c

ft_strdel.o: ft_strdel.c
	@gcc -c $(FLAGS) ft_strdel.c

ft_strclr.o: ft_strclr.c
	@gcc -c $(FLAGS) ft_strclr.c

ft_striter.o: ft_striter.c
	@gcc -c $(FLAGS) ft_striter.c

ft_striteri.o: ft_striteri.c
	@gcc -c $(FLAGS) ft_striteri.c

ft_strmap.o: ft_strmap.c
	@gcc -c $(FLAGS) ft_strmap.c

ft_strmapi.o: ft_strmapi.c
	@gcc -c $(FLAGS) ft_strmapi.c

ft_strequ.o: ft_strequ.c
	@gcc -c $(FLAGS) ft_strequ.c

ft_strnequ.o: ft_strnequ.c
	@gcc -c $(FLAGS) ft_strnequ.c

ft_strsub.o: ft_strsub.c
	@gcc -c $(FLAGS) ft_strsub.c

ft_strjoin.o: ft_strjoin.c
	@gcc -c $(FLAGS) ft_strjoin.c

ft_strtrim.o: ft_strtrim.c
	@gcc -c $(FLAGS) ft_strtrim.c

ft_strsplit.o: ft_strsplit.c
	@gcc -c $(FLAGS) ft_strsplit.c

ft_itoa.o: ft_itoa.c
	@gcc -c $(FLAGS) ft_itoa.c

ft_putchar.o: ft_putchar.c
	@gcc -c $(FLAGS) ft_putchar.c

ft_putstr.o: ft_putstr.c
	@gcc -c $(FLAGS) ft_putstr.c

ft_putendl.o: ft_putendl.c
	@gcc -c $(FLAGS) ft_putendl.c

ft_putnbr.o: ft_putnbr.c
	@gcc -c $(FLAGS) ft_putnbr.c

ft_putchar_fd.o: ft_putchar_fd.c
	@gcc -c $(FLAGS) ft_putchar_fd.c

ft_putstr_fd.o: ft_putstr_fd.c
	@gcc -c $(FLAGS) ft_putstr_fd.c

ft_putendl_fd.o: ft_putendl_fd.c
	@gcc -c $(FLAGS) ft_putendl_fd.c

ft_putnbr_fd.o: ft_putnbr_fd.c
	@gcc -c $(FLAGS) ft_putnbr_fd.c

ft_lstnew.o: ft_lstnew.c
	@gcc -c $(FLAGS) ft_lstnew.c

ft_lstdelone.o: ft_lstdelone.c
	@gcc -c $(FLAGS) ft_lstdelone.c

ft_lstdel.o: ft_lstdel.c
	@gcc -c $(FLAGS) ft_lstdel.c

ft_lstadd.o: ft_lstadd.c
	@gcc -c $(FLAGS) ft_lstadd.c

ft_lstiter.o: ft_lstiter.c
	@gcc -c $(FLAGS) ft_lstiter.c

ft_lstmap.o: ft_lstmap.c
	@gcc -c $(FLAGS) ft_lstmap.c

ft_countwords.o: ft_countwords.c
	@gcc -c $(FLAGS) ft_countwords.c

ft_lstinsert.o: ft_lstinsert.c
	@gcc -c $(FLAGS) ft_lstinsert.c

ft_lstrev.o: ft_lstrev.c
	@gcc -c $(FLAGS) ft_lstrev.c

ft_digits.o: ft_digits.c
	@gcc -c $(FLAGS) ft_digits.c

ft_lstaddend.o: ft_lstaddend.c
	@gcc -c $(FLAGS) ft_lstaddend.c
