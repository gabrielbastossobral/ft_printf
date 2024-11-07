FLAG = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC = ft_print_char.c \
		ft_print_number.c \
		ft_print_ptr.c \
		ft_print_string.c \
		ft_print_unumber.c \
		ft_printf.c \
		ft_puthex.c \
		ft_putupperhex.c


OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "$(NAME) created"
	@ranlib $(NAME)
	@echo "$(NAME) indexed"

%.o: %.c
	@cc $(FLAG) -c $< -o $@

clean:
	@rm -f $(OBJ) $(OBJ_B)
	@echo "OBJ deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re: fclean all

.PHONY: all, clean, fclean, re