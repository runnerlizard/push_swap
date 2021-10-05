/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_many.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluco <cluco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 02:45:06 by cluco             #+#    #+#             */
/*   Updated: 2021/10/05 02:56:00 by cluco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_move(int **stack, int middle)
{
	int	i;
	int	j;

	j = stack[0][0] / 2;
	while (j-- > 0)
	{
		i = ft_nearest(stack[0], middle);
		if (i > 0)
		{
			while (i-- > 1)
				ft_printf("%s", ft_ra(stack));
			ft_printf("%s", ft_pb(stack));
		}
		else
		{
			while (i-- >= -stack[0][0])
				ft_printf("%s", ft_rra(stack));
			ft_printf("%s", ft_pb(stack));
		}
	}
}

static void	ft_move4(int **stack)
{
	if ((stack[1][1] > stack[1][0] - 2) && (stack[1][2] <= stack[1][0] - 2))
	{
		ft_printf("%s", ft_pa(stack));
		ft_printf("%s", ft_rb(stack));
		if (stack[1][1] < stack[1][2])
			ft_printf("%s", ft_sb(stack));
		ft_printf("%s", ft_pa(stack));
		ft_printf("%s", ft_rrb(stack));
	}
	else if ((stack[1][1] > stack[1][0] - 2) && (stack[1][2] > stack[1][0] - 2))
	{
		ft_printf("%s", ft_pa(stack));
		ft_printf("%s", ft_pa(stack));
	}
}

static void	ft_move3(int **stack)
{
	if (stack[3][stack[3][0] + 1] == 0)
		ft_move4(stack);
	if (stack[0][1] > stack[0][2])
	{
		if (stack[1][1] < stack[1][2])
			ft_printf("%s", ft_ss(stack));
		else
			ft_printf("%s", ft_sa(stack));
	}
	else if (stack[1][1] < stack[1][2])
		ft_printf("%s", ft_sb(stack));
	ft_printf("%s", ft_pa(stack));
	ft_printf("%s", ft_pa(stack));
	stack[3][stack[3][0]] = 0;
	stack[3][0]--;
}

void	ft_move_four(int **stack)
{
	if (stack[3][stack[3][0]] == 0)
		ft_move4(stack);
	if ((stack[1][1] <= stack[1][0] - 2) && (stack[1][2] <= stack[1][0] - 2))
	{
		ft_printf("%s", ft_rb(stack));
		ft_printf("%s", ft_rb(stack));
		ft_printf("%s", ft_pa(stack));
		ft_printf("%s", ft_pa(stack));
		ft_printf("%s", ft_rrb(stack));
		ft_printf("%s", ft_rrb(stack));
		stack[3][stack[3][0] + 1] = 1;
	}
	else if ((stack[1][1] <= stack[1][0] - 2) &&
			(stack[1][2] > stack[1][0] - 2))
	{
		ft_printf("%s", ft_rb(stack));
		ft_printf("%s", ft_pa(stack));
		if (stack[1][1] < stack[1][2])
			ft_printf("%s", ft_sb(stack));
		ft_printf("%s", ft_pa(stack));
		ft_printf("%s", ft_rrb(stack));
		stack[3][stack[3][0] + 1] = 1;
	}
	ft_move3(stack);
}

int	ft_sort_many(int **stack)
{
	int	i;
	int	middle;

	i = 1;
	middle = 0;
	while (i <= stack[3][0])
	{
		middle = middle + stack[3][i++];
		ft_move(stack, middle);
	}
	ft_sort_rem(stack, stack[0][0]);
	stack[3][stack[3][0] + 1] = 0;
	ft_sort_many_add(stack);
	return (0);
}
