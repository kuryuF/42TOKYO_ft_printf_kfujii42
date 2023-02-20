/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabamikan <sabamikan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:15:25 by kfujii            #+#    #+#             */
/*   Updated: 2023/02/20 15:13:08 by sabamikan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned int i, int flag)
{
	char	*hex;
	int		len;

	hex = ft_point_base((unsigned long long)i, 16);
	if (flag == 1)
	{
		hex = ft_tolower_all(hex);
		if (hex < 0)
			return (-1);
	}
	len = ft_putstr_count(hex);
	if (len < 0)
		return (-1);
	free(hex);
	return (len);
}
