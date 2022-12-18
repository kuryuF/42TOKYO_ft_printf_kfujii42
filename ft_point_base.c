#include "ft_printf.h"

char	*change_base(unsigned long long p_sv, int b, char *r, int d)
{
	while (p_sv != 0)
	{
		if ((p_sv % b) < 10)
			r[d - 1] = (p_sv % b) + '0';
		else
			r[d - 1] = (p_sv % b) + 55;
		p_sv /= b;
		d--;
	}
	return (r);
}

char	*ft_point_base(unsigned long long point, int base)
{
	char *rtn;
	unsigned long long p_sv;
	int digits;

	digits = 0;
	p_sv = point;
	if (point == 0)
		ft_strdup("0");
	while (point != 0)
	{
		point = point / base;
		digits++;
	}
	if (!(rtn = ft_calloc(digits + 1, sizeof(char))))
		return (NULL);
	rtn = change_base(p_sv, base, rtn, digits);
	return (rtn);
}