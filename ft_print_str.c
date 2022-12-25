#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int len;

	len = 0;
	if (str == NULL)
		str = "(null)";
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (len);
}
