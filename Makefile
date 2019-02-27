CC = gcc

NAME = ft_ls

SRCS = srcs/main.c \

OBJ = $(SRCS:.c=.o)

FLAGS = -Wall -Werror -Wextra

LIB = libft/libft.a

all: $(NAME)
$(NAME): $(LIB) $(OBJ)
	$(CC) -I includes -o $@ $^ $(LIB) $(FLAGS)

$(LIB):
	make -C libft
%.o: %.c 
	$(CC) -I includes -o $@ -c $< $(FLAGS)

clean:
	make -C libft clean
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	rm -rf $(LIB)

re: fclean all