#include "ft_printf.h"

int	ft_print_int(int i)
{
	char	*str;
	int		len;

	str = ft_itoa(i);
	len = ft_putstr_count(str);
	free(str);
	return (len);
}