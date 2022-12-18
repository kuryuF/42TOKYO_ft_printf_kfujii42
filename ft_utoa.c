#include "ft_printf.h"

int	ft_get_digit_u(unsigned long long n)
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

char	*ft_utoa(unsigned long long n)
{
	char			*str;
	int				digit;
	unsigned int	num;

	digit = ft_get_digit_u(n);
	num = n;
	if (!(str = (char *)malloc(sizeof(char) * (digit + 1))))
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num = num * (-1);
	}
	if (num == 0)
		str[0] = '0';
	str[digit] = '\0';
	digit--;
	while (num)
	{
		str[digit] = num % 10 + '0';
		digit--;
		num = num / 10;
	}
	return (str);
}