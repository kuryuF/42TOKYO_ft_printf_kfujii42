#include "ft_printf.h"

int	ft_print_ptr(unsigned long long ptr)
{
	char *p;
	int	len;

	p = ft_tolower_all(ft_point_base(ptr, 16));
	len = ft_putstr_count("0x");
	len += ft_putstr_count(p);
	free(p);

	return (len);
}
