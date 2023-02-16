/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfujii <kfujii@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:18:45 by kfujii            #+#    #+#             */
/*   Updated: 2023/02/16 11:44:22 by kfujii           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_get_digit_u(unsigned int n)
{
	int	digit;

	digit = 0;
	if (n <= 0)
		digit++;
	while (n)
	{
		digit++;
		n = n / 10;
	}
	return (digit);
}

static unsigned int	ft_utoa_zero(unsigned int num, char *str)
{
	if (num < 0)
	{
		str[0] = '-';
		num = num * (-1);
	}
	if (num == 0)
		str[0] = '0';
	return (num);
}

char	*ft_utoa(unsigned int n)
{
	char			*str;
	char			*str_sv;
	int				digit;
	unsigned int	num;

	digit = ft_get_digit_u(n);
	num = n;
	str = (char *)malloc(sizeof(char) * (digit + 1));
	if (!str)
		return (NULL);
	num = ft_utoa_zero(num, str);
	str[digit] = '\0';
	digit--;
	while (num)
	{
		str[digit] = num % 10 + '0';
		digit--;
		num = num / 10;
	}
	str_sv = str;
	free(str);
	return (str_sv);
}
