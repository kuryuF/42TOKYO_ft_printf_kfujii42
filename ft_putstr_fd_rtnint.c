/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_rtnint.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabamikan <sabamikan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:42:14 by sabamikan         #+#    #+#             */
/*   Updated: 2023/02/20 14:21:58 by sabamikan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd_rtnint(char *str, int fd)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_putchar_fd_rtnint(str[i], fd) == -1)
			return (-1);
		i++;
	}
	return (1);
}
