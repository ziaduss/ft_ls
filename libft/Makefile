# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: maberkan <maberkan@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/08 09:54:52 by moghomra     #+#   ##    ##    #+#        #
#    Updated: 2019/02/18 15:23:11 by maberkan    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a

HEADERS = ./libft.h

CC = gcc 

SRC = ./ft_atoi.c \
	./ft_bzero.c \
	./ft_isalnum.c \
	./ft_isalpha.c \
	./ft_isascii.c \
	./ft_isdigit.c \
	./ft_isprint.c \
	./ft_itoa.c \
	./ft_lstadd.c \
	./ft_lstdel.c \
	./ft_lstdelone.c \
	./ft_lstiter.c \
	./ft_lstmap.c \
	./ft_lstnew.c \
	./ft_memalloc.c \
	./ft_memccpy.c \
	./ft_memchr.c \
	./ft_memcmp.c \
	./ft_memcpy.c \
	./ft_memdel.c \
	./ft_memmove.c \
	./ft_memset.c \
	./ft_nbr_nbr.c \
	./ft_nbr_w.c \
	./ft_putchar.c \
	./ft_putchar_fd.c \
	./ft_putendl.c \
	./ft_putendl_fd.c \
	./ft_putnbr.c \
	./ft_putnbr_fd.c \
	./ft_putstr.c \
	./ft_putstr_fd.c \
	./ft_strcat.c \
	./ft_strchr.c \
	./ft_strclr.c \
	./ft_strcmp.c \
	./ft_strcpy.c \
	./ft_strdel.c \
	./ft_strdup.c \
	./ft_strequ.c \
	./ft_striter.c \
	./ft_striteri.c \
	./ft_strjoin.c \
	./ft_strlcat.c \
	./ft_strlen.c \
	./ft_strmap.c \
	./ft_strmapi.c \
	./ft_strncat.c \
	./ft_strncmp.c \
	./ft_strncpy.c \
	./ft_strndup.c \
	./ft_strnequ.c \
	./ft_strnew.c \
	./ft_strnstr.c \
	./ft_strrchr.c \
	./ft_strrev.c \
	./ft_strsplit.c \
	./ft_strstr.c \
	./ft_strsub.c \
	./ft_strtrim.c \
	./ft_tolower.c \
	./ft_toupper.c \
	./ft_strupcase.c \
	./ft_strlowcase.c\
	./get_next_line.c \
	./ft_sqrt.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror
all: $(NAME)
$(NAME): $(OBJ)
	@ ar rc $(NAME) $(OBJ)
	@ ranlib $(NAME)
	@echo "\033[32mBinary \033[1;32m$(NAME)\033[1;0m\033[32m created.\033[0m"

%.o: %.c
	@ gcc $(FLAGS) -I $(HEADERS) -o $@ -c $<
	@echo "\033[34m\033[1mCompilation of \033[0m\033[36m$(notdir $<)\033[1m\033[34m done.\033[0m"

clean:
	@ /bin/rm -f $(OBJ)
	@echo "\033[31mObjects files \033[1;31m$(OBJS_LIST)\033[1;0m\033[31m removed.\033[0m"

fclean: clean
	@ /bin/rm -f $(NAME)
	@echo "\033[31mBin \033[1;31m$(NAME)\033[1;0m\033[31m removed.\033[0m"

re: fclean all
