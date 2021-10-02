/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluco <cluco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:28:32 by cluco             #+#    #+#             */
/*   Updated: 2021/10/02 15:28:43 by cluco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_sa(int **stack)
{
	int	i;

	i = stack[0][1];
	stack[0][1] = stack[0][2];
	stack[0][2] = i;
	stack[2][0]++;
	i = stack[2][0];
	stack[2][i] = 1;
	return ("sa\n");
}
