#include "push_swap.h"

int	ft_split(int *a, char const *str)
{
	int	sign;
	int	i;
	int	j;

	if (!(str))
		return (-1);
	j = 1;
	i = 0;
	a[0] = 0;
	sign = 1;
	while (str[i])
	{
		a[0]++;
		while (str[i] == 32)
			i++;
		if ((str[i] == '-') || (str[i] == '+'))
			if (str[i++] == '-')
				sign = -1;
		if ((str[i] < 48) || (str[i] > 57))
			return (-1);
		a[j] = 0;
		while ((str[i] > 47) && (str[i] < 58))
			a[j] = a[j]*10 + str[i++] - 48;
		a[j] = a[j] * sign;
	}
	return (0);
}