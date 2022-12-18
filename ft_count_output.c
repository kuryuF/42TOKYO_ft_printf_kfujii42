#include "ft_printf.h"

int	ft_count_output(const char *save, va_list args)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (save[i])
	{
		if (save[i] == '%')
		{
			i++;
			len += ft_treat_something(save[i], args);
		}
		else
		{
			ft_putchar_fd(save[i], 1);
			len++;
		}
		i++;
		if (!save[i])
			return (len);
	}
	return (len);
}