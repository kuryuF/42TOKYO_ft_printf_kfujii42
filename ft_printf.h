#ifndef FT_PRINTF
#define FT_PRINTF

#include "libft/libft.h"
#include <stdarg.h>

int		ft_printf(const char *input, ...);
int		ft_count_output(const char *save, va_list args);
int		ft_treat_something(int c, va_list args);
int		ft_print_char(char c);
int		ft_print_str(char *str);
int		ft_print_ptr(unsigned long long ptr);
int		ft_print_int(int i);
int		ft_putstr_count(char *str);
int		ft_print_uint(unsigned long long uint);
char	*ft_utoa(unsigned long long n);
int		ft_print_hexa(unsigned int i, int f);
char	*ft_point_base(unsigned long long point, int base);
char	*ft_tolower_all(char *c);



#endif