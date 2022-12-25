#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	const char	*save;
	va_list		args;
	int			output_len;

	output_len = 0;
	save = ft_strdup((char *)input);
	if (!save)
		return (0);
	va_start(args, input);
	output_len = ft_count_output(save, args);
	va_end(args);
	free((char *)save);
	return (output_len);
}
