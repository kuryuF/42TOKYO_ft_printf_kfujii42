/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujii <kfujii@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:15:49 by kfujii            #+#    #+#             */
/*   Updated: 2023/02/16 11:16:04 by kfujii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(unsigned long long ptr)
{
	char	*p;
	int		len;

	p = ft_tolower_all(ft_point_base(ptr, 16));
	len = ft_putstr_count("0x");
	len += ft_putstr_count(p);
	free(p);
	return (len);
}
