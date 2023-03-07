/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_rtnint.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabamikan <sabamikan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:42:14 by sabamikan         #+#    #+#             */
/*   Updated: 2023/03/07 15:18:17 by sabamikan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putstr_fd_rtnint(char *str, int fd)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_putchar_fd_rtnint(str[i], fd) < 0)
			return (ERROR);
		i++;
	}
	return (i);
}
