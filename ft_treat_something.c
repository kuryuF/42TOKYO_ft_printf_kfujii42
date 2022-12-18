#include "ft_printf.h"

int	ft_treat_something(int c, va_list args)
{
	int	n;

	n = 0;
	if (c == 'c')
		n = ft_print_char(va_arg(args, int));
	else if (c == 's')
		n = ft_print_str(va_arg(args, char *));
	else if (c == 'p')
		n = ft_print_ptr((unsigned long long)va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		n = ft_print_int(va_arg(args, int));
	else if (c == 'u')
		n = ft_print_uint(va_arg(args, unsigned int));
	else if (c == 'x')
		n = ft_print_hexa(va_arg(args, unsigned int), 1);
	else if (c == 'X')
		n = ft_print_hexa(va_arg(args, unsigned int), 2);
	else if (c == '%')
		ft_putstr_count("%");

	return (n);
}