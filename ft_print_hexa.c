#include "ft_printf.h"

int	ft_print_hexa(unsigned int i, int f)
{
	char	*hex;
	int		len;

	if (!i)
		i = 0;
	hex = ft_point_base((unsigned long long)i, 16);
	if (f == 1)
		hex = ft_tolower_all(hex);
	len = ft_putstr_count(hex);
	free(hex);
	return (len);
}
