/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabamikan <sabamikan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:16:30 by kfujii            #+#    #+#             */
/*   Updated: 2023/03/07 14:31:48 by sabamikan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_print_uint(unsigned int uint)
{
	char	*str;
	ssize_t	len;

	len = 0;
	str = ft_utoa(uint);
	len = ft_putstr_count(str);
	free(str);
	return (len);
}
