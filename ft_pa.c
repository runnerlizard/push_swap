/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluco <cluco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:20:00 by cluco             #+#    #+#             */
/*   Updated: 2021/10/02 15:20:01 by cluco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_pa(int **stack)
{
	int	i;

	ft_plus_first(stack[0], stack[1][1]);
	ft_minus_first(stack[1]);
	stack[2][0]++;
	i = stack[2][0];
	stack[2][i] = 4;
	if ((stack[1][0] > 1) && (stack[1][1] < stack[1][2])
	&& (stack[0][1] > stack[0][2]))
	{
		ft_ss(stack);
		return ("pa\nss\n");
	}
	return ("pa\n");
}
