#include "push_swap.h"

long long int	ft_atoi(const char *str)
{
	size_t			i;
	long long int	a;
	int				sign;

	i = 0;
	sign = 1;
	a = 0;
	if (ft_strlen(str) > 10)
		return (2147483649);
	if ((str[i] == '+') || (str[i] == '-'))
		if (str[i++] == '-')
			sign = -1;
	while ((str[i] >= 48) && (str[i] <= 57) && (a < 9999999999))
		a = (a * 10) + (str[i++] - 48);
	if (((a > 2147483648) && (sign < 0)) || ((a > 2147483647) && (sign > 0)))
		return (2147483649);
	return (a * sign);
}