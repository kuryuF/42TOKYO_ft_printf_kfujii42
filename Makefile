NAME = libftprintf.a
CC = cc
CFLAGS = -c -Wall -Wextra -Werror
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
		ft_tolower_all.c

OBJS =	ft_count_output.o \
			ft_printf.o \
			ft_check_type_field.o \
			ft_print_char.o \
			ft_print_str.o \
			ft_print_int.o \
			ft_print_ptr.o \
			ft_putstr_count.o \
			ft_print_uint.o \
			ft_utoa.o \
			ft_print_hexa.o \
			ft_point_base.o \
			ft_tolower_all.o

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp $(LIBFT) $(NAME)
	$(CC) $(CFLAGS) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(MAKE) clean -C $(LIBFTDIR)
	rm -rf $(OBJS)

fclean : clean
	$(MAKE) fclean -C $(LIBFTDIR)
	rm -rf $(NAME)

re : fclean all

.PHONY	: all clean fclean re