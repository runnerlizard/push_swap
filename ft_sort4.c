/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluco <cluco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 02:32:10 by cluco             #+#    #+#             */
/*   Updated: 2021/10/05 02:38:10 by cluco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sort41(int **stack)
{
	ft_printf("%s", ft_pb(stack));
	ft_printf("%s", ft_pb(stack));
	ft_printf("%s", ft_ra(stack));
	ft_printf("%s", ft_ra(stack));
	ft_printf("%s", ft_pa(stack));
	ft_printf("%s", ft_pa(stack));
	ft_printf("%s", ft_rra(stack));
	ft_printf("%s", ft_rra(stack));
	ft_sort_three(stack);
}

static void	ft_sort42(int **stack)
{
	if (stack[0][1] == stack[1][0] + 3)
	{
		if (stack[0][1] > stack[0][2])
			ft_printf("%s", ft_ss(stack));
		else
			ft_printf("%s", ft_sb(stack));
		ft_printf("%s", ft_ra(stack));
		ft_printf("%s", ft_ra(stack));
		ft_printf("%s", ft_pa(stack));
		ft_printf("%s", ft_pa(stack));
		ft_printf("%s", ft_rra(stack));
		ft_printf("%s", ft_rra(stack));
	}
	else
	{
		ft_printf("%s", ft_ra(stack));
		ft_printf("%s", ft_ra(stack));
		ft_printf("%s", ft_ra(stack));
		ft_printf("%s", ft_pa(stack));
		ft_printf("%s", ft_rra(stack));
		ft_printf("%s", ft_rra(stack));
		ft_printf("%s", ft_rra(stack));
		ft_sort_three(stack);
	}
}

void	ft_sort4(int **stack)
{
	if (stack[0][4] == stack[1][0] + 4)
		ft_sort_three(stack);
	else if (stack[0][3] == stack[1][0] + 4)
	{
		ft_printf("%s", ft_pb(stack));
		ft_printf("%s", ft_pb(stack));
		if (stack[0][1] > stack[0][2])
			ft_printf("%s", ft_sa(stack));
		ft_printf("%s", ft_pa(stack));
		ft_printf("%s", ft_pa(stack));
		ft_sort_three(stack);
	}
	else if (stack[0][2] == stack[1][0] + 4)
		ft_sort41(stack);
	else
	{
		ft_printf("%s", ft_pb(stack));
		ft_sort42(stack);
	}
	stack[3][stack[3][0]] = 0;
	stack[3][0]--;
}
