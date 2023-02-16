/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_output.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujii <kfujii@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:13:00 by kfujii            #+#    #+#             */
/*   Updated: 2023/02/16 11:13:05 by kfujii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_output(const char *save, va_list args)
{
	size_t	i;
	size_t	output_len;

	i = 0;
	output_len = 0;
	while (save[i])
	{
		if (save[i] == '%')
		{
			i++;
			output_len += ft_check_type_field(save[i], args);
		}
		else
		{
			ft_putchar_fd(save[i], 1);
			output_len++;
		}
		i++;
		if (!save[i])
			return (output_len);
	}
	return (output_len);
}
