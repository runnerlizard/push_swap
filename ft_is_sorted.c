/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluco <cluco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:15:19 by cluco             #+#    #+#             */
/*   Updated: 2021/10/02 15:15:42 by cluco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_sorted(int *a, int n)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i++ < n - 1)
		if (a[i] - a[i + 1] == -1)
			count++;
	if (count == n - 1)
		return (1);
	if (count == 0)
		return (-1);
	return (0);
}
