NAME = libftprintf.a
CC = gcc
FLAGS = -c
LIBFT = ./libft/libft.a

SRCS =	ft_count_output.c \
		ft_printf.c \
		ft_treat_something.c \
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

SURPL_O =	ft_count_output.o \
			ft_printf.o \
			ft_treat_something.o \
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

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	$(CC) $(FLAGS) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(MAKE) clean -C ./libft
	rm -rf $(SURPL_O)
	rm -rf $(OBJS)

fclean : clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re : fclean all

.PHONY	: all clean fclean re