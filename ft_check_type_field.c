/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_type_field.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabamikan <sabamikan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:12:32 by kfujii            #+#    #+#             */
/*   Updated: 2023/02/20 12:17:53 by sabamikan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_check_type_field(int c, va_list args)
{
	size_t	arg_len;

	arg_len = 0;
	if (c == 'c')
		arg_len = ft_putchar_fd_rtnint(va_arg(args, int), 1);
	else if (c == 's')
		arg_len = ft_print_str(va_arg(args, char *));
	else if (c == 'p')
		arg_len = ft_print_ptr((unsigned long long)va_arg(args, uintptr_t));
	else if (c == 'd' || c == 'i')
		arg_len = ft_print_int(va_arg(args, int));
	else if (c == 'u')
		arg_len = ft_print_uint(va_arg(args, unsigned int));
	else if (c == 'x')
		arg_len = ft_print_hexa(va_arg(args, unsigned int), 1);
	else if (c == 'X')
		arg_len = ft_print_hexa(va_arg(args, unsigned int), 2);
	else if (c == '%')
		arg_len = ft_putstr_count("%");
	return (arg_len);
}
