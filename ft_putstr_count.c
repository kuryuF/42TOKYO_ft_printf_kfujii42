#include "ft_printf.h"

int ft_putstr_count(char *c)
{
    int n;

    if (!c)
        return (0);
    n = ft_strlen(c);
    ft_putstr_fd(c, 1);
    return (n);
}