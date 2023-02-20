/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabamikan <sabamikan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:17:12 by kfujii            #+#    #+#             */
/*   Updated: 2023/02/20 15:01:47 by sabamikan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
size_t	ft_count_output(const char *format, va_list args);
size_t	ft_check_type_field(int c, va_list args);
int		ft_print_char(char c);
size_t	ft_print_str(char *str);
size_t	ft_print_ptr(unsigned long long ptr);
int		ft_print_int(int i);
size_t	ft_putstr_count(char *str);
int		ft_print_uint(unsigned int uint);
char	*ft_utoa(unsigned int n);
int		ft_print_hexa(unsigned int i, int f);
char	*ft_point_base(unsigned long long point, int base);
char	*ft_tolower_all(char *str);
int		ft_putchar_fd_rtnint(char c, int fd);
int		ft_putstr_fd_rtnint(char *str, int fd);

#endif