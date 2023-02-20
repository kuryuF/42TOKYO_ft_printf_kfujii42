/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabamikan <sabamikan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:16:50 by kfujii            #+#    #+#             */
/*   Updated: 2023/02/20 12:31:13 by sabamikan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		args;
	size_t		output_len;

	output_len = 0;
	va_start(args, format);
	output_len = ft_count_output(format, args);
	va_end(args);
	return (output_len);
}
