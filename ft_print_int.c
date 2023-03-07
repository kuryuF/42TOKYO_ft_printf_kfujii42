/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabamikan <sabamikan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:15:35 by kfujii            #+#    #+#             */
/*   Updated: 2023/03/07 23:23:57 by sabamikan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_print_int(int i)
{
	char	*str;
	int		len;

	str = ft_itoa(i);
	len = ft_putstr_count(str);
	free(str);
	return (len);
}
