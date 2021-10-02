/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluco <cluco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:26:45 by cluco             #+#    #+#             */
/*   Updated: 2021/10/02 15:27:18 by cluco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_rra(int **stack)
{
	int	i;

	i = stack[0][0];
	i = stack[0][i];
	ft_plus_first(stack[0], i);
	stack[0][0]--;
	if ((stack[1][0] > 1) && (stack[1][stack[1][0]] < stack[1][0] / 2))
		stack[2][0]++;
	i = stack[2][0];
	stack[2][i] = 9;
	return ("rra\n");
}
