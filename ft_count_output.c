/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_output.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabamikan <sabamikan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:13:00 by kfujii            #+#    #+#             */
/*   Updated: 2023/02/20 15:47:03 by sabamikan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_count_output(const char *format, va_list args)
{
	size_t	i;
	size_t	output_len;
	size_t	arg_len;

	i = 0;
	output_len = 0;
	arg_len = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			arg_len = ft_check_type_field(format[i], args);
			if (arg_len < 0)
				return (-1);
			else
				output_len += arg_len;
		}
		else
		{
			if (ft_putchar_fd_rtnint(format[i], 1) < 0)
				return(-1);
			output_len++;
		}
		i++;
	}
	return (output_len);
}
