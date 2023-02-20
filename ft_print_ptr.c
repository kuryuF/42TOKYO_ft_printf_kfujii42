/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabamikan <sabamikan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:15:49 by kfujii            #+#    #+#             */
/*   Updated: 2023/02/20 15:07:21 by sabamikan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_print_ptr(unsigned long long ptr)
{
	char		*p;
	size_t		len;

	p = ft_tolower_all(ft_point_base(ptr, 16));
	if (*p == '-')
		return (-1);
	len = ft_putstr_count("0x");
	len += ft_putstr_count(p);
	if (len < 0)
		return (-1);
	free(p);
	return (len);
}
