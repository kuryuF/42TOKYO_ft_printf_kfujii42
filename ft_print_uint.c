/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujii <kfujii@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:16:30 by kfujii            #+#    #+#             */
/*   Updated: 2023/02/16 11:16:43 by kfujii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_uint(unsigned int uint)
{
	char	*str;
	int		len;

	len = 0;
	str = ft_utoa(uint);
	len = ft_putstr_count(str);
	return (len);
}
