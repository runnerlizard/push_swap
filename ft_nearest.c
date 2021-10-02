/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nearest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluco <cluco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:17:50 by cluco             #+#    #+#             */
/*   Updated: 2021/10/02 15:18:26 by cluco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_nearest(int *a, int middle)
{
	int	i;
	int	j;

	i = 0;
	j = a[0] + 1;
	while (i++ < j--)
	{
		if (a[i] <= middle)
			return (i);
		if (a[j] <= middle)
			return (-j);
	}
	return (0);
}
