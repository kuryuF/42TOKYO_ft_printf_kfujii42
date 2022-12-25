#include "ft_printf.h"

int	ft_count_output(const char *save, va_list args)
{
	size_t	i;
	size_t	output_len;

	i = 0;
	output_len = 0;
	while (save[i])
	{
		if (save[i] == '%')
		{
			i++;
			output_len += ft_check_type_field(save[i], args);
		}
		else
		{
			ft_putchar_fd(save[i], 1);
			output_len++;
		}
		i++;
		if (!save[i])
			return (output_len);
	}
	return (output_len);
}
