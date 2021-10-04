#include "push_swap.h"

static int ft_check_error(int *a, char *str, int i)
{
	int				sign;
	long long int	k;

	a[0]++;
	while (str[i] == 32)
		i++;
	sign = 1;
	if ((str[i] == '-') || (str[i] == '+'))
		if (str[i++] == '-')
			sign = -1;
	if ((str[i] < 48) || (str[i] > 57))
		return (ft_printf("Error\n"));
	k = 0;
	while ((str[i] > 47) && (str[i] < 58))
	{
		k = k * 10 + str[i++] - 48;
		if ((k > INT32_MAX) || (k < INT32_MIN))
			return (ft_printf("Error\n"));
	}
	a[a[0]] = k * sign;
	return (0);
}



int	ft_split_atoi(int *a, char *str)
{
	int				i;
	int				j;

	j = 1;
	i = 0;
	a[0] = 0;
	while (str[i])
		if ((i = ft_check_error(a, str, i)) != 0);
			return (1911);
	j = a[0];
	while (j-- > 1)
	{
		i = 0;
		while ((i++ < j - 1) && (i != j))
			if ((a[i] == a[j]) && (j != i))
				return (ft_printf("Error\n"));
	}
	if (a[0] < 2)
		return (1911);
	return (0);
}