#include "ft_printf.h"

int	ft_print_uint(unsigned int uint)
{
	char *str;
	int	len;

	len = 0;
	str = ft_utoa(uint);
	len = ft_putstr_count(str);
	return (len);
}
