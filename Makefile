SRC = ft_printf.c ft_printf_s.c ft_printf_c.c ft_printf_d.c ft_printf_u.c \
		ft_printf_hex.c ft_printf_hexup.c ft_printf_p.c


OBJ = $(SRC:.c=.o)

CC = cc 

CFLAGS = -Wall -Wextra -Werror -g

NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re