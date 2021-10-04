/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluco <cluco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 02:12:51 by cluco             #+#    #+#             */
/*   Updated: 2021/10/05 02:12:52 by cluco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sort_three_start(int **stack)
{
	if ((stack[0][3] > stack[0][2]) && (stack[0][3] > stack[0][1]))
		ft_sort_two(stack);
	if ((stack[0][1] > stack[0][2]) && (stack[0][1] > stack[0][3]))
	{
		ft_printf("%s", ft_ra(stack));
		ft_sort_two(stack);
	}
	if ((stack[0][2] > stack[0][1]) && (stack[0][2] > stack[0][3]))
	{
		ft_printf("%s", ft_pb(stack));
		ft_sort_two(stack);
		ft_printf("%s", ft_pa(stack));
		ft_sort_two(stack);
	}
}

int	ft_sort_three(int **stack)
{
	if (stack[0][0] == 3)
		ft_sort_three_start(stack);
	else
	{
		if ((stack[0][3] > stack[0][2]) && (stack[0][3] > stack[0][1]))
			ft_sort_two(stack);
		if ((stack[0][1] > stack[0][2]) && (stack[0][1] > stack[0][3]))
		{
			ft_printf("%s", ft_ra(stack));
			ft_printf("%s", ft_pb(stack));
			ft_printf("%s", ft_rra(stack));
			ft_printf("%s", ft_sa(stack));
			ft_printf("%s", ft_pa(stack));
			ft_sort_two(stack);
		}
		if ((stack[0][2] > stack[0][1]) && (stack[0][2] > stack[0][3]))
		{
			ft_printf("%s", ft_pb(stack));
			ft_printf("%s", ft_sa(stack));
			ft_printf("%s", ft_pa(stack));
			ft_sort_two(stack);
		}
	}
	return (0);
}
