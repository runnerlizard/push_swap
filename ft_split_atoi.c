/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_atoi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluco <cluco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 02:15:50 by cluco             #+#    #+#             */
/*   Updated: 2021/10/16 15:15:23 by cluco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_check_error(int *a, char *str, int i)
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
		return (ft_printf("Error\n") - 100);
	k = 0;
	while ((str[i] > 47) && (str[i] < 58))
	{
		k = k * 10 + str[i++] - 48;
		if ((k > INT32_MAX) || (k < INT32_MIN))
			return (ft_printf("Error\n") - 100);
	}
	a[a[0]] = k * sign;
	return (i);
}

int	ft_split_atoi(int *a, char *str)
{
	int				i;
	int				j;

	j = 1;
	i = 0;
	a[0] = 0;
	while (str[i])
	{
		i = ft_check_error(a, str, i);
		if (i < 0)
			return (1911);
	}
	j = a[0] + 1;
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
