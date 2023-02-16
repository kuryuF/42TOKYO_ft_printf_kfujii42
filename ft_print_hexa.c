/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujii <kfujii@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:15:25 by kfujii            #+#    #+#             */
/*   Updated: 2023/02/16 11:15:27 by kfujii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned int i, int flag)
{
	char	*hex;
	int		len;

	if (!i)
		i = 0;
	hex = ft_point_base((unsigned long long)i, 16);
	if (flag == 1)
		hex = ft_tolower_all(hex);
	len = ft_putstr_count(hex);
	free(hex);
	return (len);
}
