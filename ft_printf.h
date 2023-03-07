/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabamikan <sabamikan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:17:12 by kfujii            #+#    #+#             */
/*   Updated: 2023/03/07 23:23:07 by sabamikan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

# define ERROR -1
# define UPPER 1
# define LOWER 2

int		ft_printf(const char *format, ...);
size_t	ft_count_output(const char *format, va_list args);
size_t	ft_check_type_field(int c, va_list args);
size_t	ft_print_char(char c);
size_t	ft_print_str(char *str);
size_t	ft_print_ptr(uintptr_t ptr);
size_t	ft_print_int(int i);
size_t	ft_putstr_count(char *str);
ssize_t	ft_print_uint(unsigned int uint);
char	*ft_utoa(unsigned int n);
ssize_t	ft_print_hexa(unsigned int i, int f);
char	*ft_point_base(unsigned long long point, int base);
char	*ft_tolower_all(char *str);
size_t	ft_putchar_fd_rtnint(char c, int fd);
size_t	ft_putstr_fd_rtnint(char *str, int fd);

#endif