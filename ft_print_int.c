/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujii <kfujii@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:15:35 by kfujii            #+#    #+#             */
/*   Updated: 2023/02/16 11:15:37 by kfujii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int i)
{
	char	*str;
	int		len;

	str = ft_itoa(i);
	len = ft_putstr_count(str);
	free(str);
	return (len);
}
