CC = gcc

NAME = ft_ls

SRCS = srcs/main.c \

OBJ = $(SRCS:.c=.o)

FLAGS = -Wall -Werror -Wextra

LIB = libft/libft.a

all: $(NAME)
$(NAME): $(LIB) $(OBJ)
	$(CC) -I includes -o $@ $^ $(LIB) $(FLAGS)
	@echo "\033[32mBinary \033[1;32m$(NAME)\033[1;0m\033[32m created.\033[0m"

$(LIB):
	make -C libft
%.o: %.c 
	$(CC) -I includes -o $@ -c $< $(FLAGS)
	@echo "\033[34m\033[1mCompilation of \033[0m\033[36m$(notdir $<)\033[1m\033[34m done.\033[0m"


clean:
	make -C libft clean
	rm -rf $(OBJ)
	@echo "\033[31mObjects files \033[1;31m$(OBJS_LIST)\033[1;0m\033[31m removed.\033[0m"


fclean: clean
	rm -rf $(NAME)
	rm -rf $(LIB)
	@echo "\033[31mBin \033[1;31m$(NAME)\033[1;0m\033[31m removed.\033[0m"


re: fclean all