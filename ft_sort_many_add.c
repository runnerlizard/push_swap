/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_many_add.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluco <cluco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:39:08 by cluco             #+#    #+#             */
/*   Updated: 2021/10/02 15:42:29 by cluco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static ft_move4(int **stack, int i)
{
    if (stack[0][1] < middle)
    {
        ft_printf("%s", ft_pb(stack));
        stack[3][i + 1]++;
        stack[3][i]++;
    }
    else if (stack[0][2] < middle)
    {
        ft_printf("%s", ft_sa(stack));
        ft_printf("%s", ft_pb(stack));
        stack[3][i + 1]++;
        stack[3][i]++;
    }
    else if (stack[3][i + 3] > stack[3][i])
    {
        ft_printf("%s", ft_ra(stack));
        stack[3][i + 2]++;
    }
}

static int ft_move_to_b(int **stack, int i)
{
    int j;
    int middle;

    middle = (2 * stack[1][0] + 1 - stack[3][i]) / 2 + 1;
    j = stack[3][i];
    stack[3][i + 1] = j;
    stack[3][i] = 0;
    stack[3][i + 2] = 0;
    stack[3][i + 3] = - j / 2 - j % 2;
    while (j++ < 0)
        ft_move4(stack, i);
    while (stack[3][i + 2]-- > 0)
        ft_printf("%s", ft_rra(stack));
    stack[3][0]++;
    return (0);
}

int ft_sort_many_add(int **stack)
{
    int i;

    while (stack[3][0] > 0)
    {
        i = stack[3][0];
        if (stack[3][i] > 4)
            ft_move_to_a(stack, i);
        else if (stack[3][i] > 3)
            ft_move_four(stack);
        else if (stack[3][i] > 0)
            ft_move_to_a_and_sort(stack, i);
        while (stack[0][-stack[3][i]] - stack[0][-stack[3][i + 1]] == -1)
            stack[3][i]++;
        if ((stack[3][i] > -4) && (stack[3][i] < 0))
            ft_sort_a(stack, i);
        else if (stack[3][i] < 0)
            ft_move_to_b(stack, i);
    }
    return (i);
}