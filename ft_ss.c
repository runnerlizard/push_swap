/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluco <cluco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 02:16:25 by cluco             #+#    #+#             */
/*   Updated: 2021/10/05 02:16:26 by cluco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_ss(int **stack)
{
	int	i;

	i = stack[0][1];
	stack[0][1] = stack[0][2];
	stack[0][2] = i;
	i = stack[1][1];
	stack[1][1] = stack[1][2];
	stack[1][2] = i;
	stack[2][0]++;
	i = stack[2][0];
	stack[2][i] = 3;
	return ("ss\n");
}
