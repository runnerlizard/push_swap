#include "push_swap.h"

int	ft_split_atoi(int *a, char const *str)
{
	int				sign;
	int				i;
	int				j;
	long long int	k;

	j = 1;
	i = 0;
	a[0] = 0;
	while (str[i])
	{
		a[0]++;
		while (str[i] == 32)
			i++;
		if ((str[i] == '-') || (str[i] == '+'))
			if (str[i++] == '-')
				sign = -1;
		if ((str[i] < 48) || (str[i] > 57))
			return (ft_printf("Error1\n"));
		k = 0;
		sign = 1;
		while ((str[i] > 47) && (str[i] < 58))
		{
			k = k * 10 + str[i++] - 48;
			if ((k > INT32_MAX) || (k < INT32_MIN))
				return (ft_printf("Error2\n"));
		}
		a[j++] = k * sign;
	}
	while (j-- > 1)
	{
		i = 0;
		while ((i++ < j - 1) && (i != j))
			if (a[i] == a[j])
				return (ft_printf("Error3\n"));
	}
	if (a[0] < 2)
		return (1911);
	return (0);
}