#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	const char	*save;
	va_list		args;
	int			print_len;

	print_len = 0;
	if (!(save = ft_strdup((char *)input)))
		return (0);
	va_start(args, input);
	print_len = ft_count_output(save, args);
	va_end(args);
	free((char *)save);
	return (print_len);
}