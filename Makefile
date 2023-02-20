NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFTDIR = ./libft
LIBFT = $(LIBFTDIR)/libft.a

SRCS =	ft_count_output.c \
		ft_printf.c \
		ft_check_type_field.c \
		ft_print_char.c \
		ft_print_str.c \
		ft_print_int.c \
		ft_print_ptr.c \
		ft_putstr_count.c \
		ft_print_uint.c \
		ft_utoa.c \
		ft_print_hexa.c \
		ft_point_base.c \
		ft_tolower_all.c \
		ft_putchar_fd_rtnint.c \
		ft_putstr_fd_rtnint.c

OBJS =	$(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp $(LIBFT) $(NAME)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(MAKE) fclean -C $(LIBFTDIR)
	rm -f $(OBJS)

fclean : clean
	$(MAKE) fclean -C $(LIBFTDIR)
	rm -f $(NAME)

re : fclean all

.PHONY	: all clean fclean re