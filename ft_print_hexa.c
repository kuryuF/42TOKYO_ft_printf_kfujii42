/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabamikan <sabamikan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:15:25 by kfujii            #+#    #+#             */
/*   Updated: 2023/03/07 14:28:19 by sabamikan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_print_hexa(unsigned int i, int flag)
{
	char	*hex;
	int		len;

	hex = ft_point_base((unsigned long long)i, 16);
	if (flag == 1)
	{
		hex = ft_tolower_all(hex);
		if (hex < 0)
			return (ERROR);
	}
	len = ft_putstr_count(hex);
	if (len < 0)
		return (ERROR);
	free(hex);
	return (len);
}
