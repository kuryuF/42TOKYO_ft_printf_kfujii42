#include "ft_printf.h"

int ft_putstr_count(char *str)
{
	int	len;

	if (!str)
		return (0);
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (len);
}
