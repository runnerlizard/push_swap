/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_four.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluco <cluco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:29:24 by cluco             #+#    #+#             */
/*   Updated: 2021/10/05 02:06:07 by cluco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int  ft_four1(int **stack)
{
   ft_printf("%s", ft_pb(stack));
   ft_sort_three(stack);
   ft_printf("%s", ft_pa(stack));
   return (0);
}

static int  ft_four2(int **stack)
{
   ft_printf("%s", ft_ra(stack));
   if (ft_is_sorted(stack[0], 3) == 1)
      return (0);
   ft_printf("%s", ft_pb(stack));
   ft_sort_three(stack);
   ft_printf("%s", ft_pa(stack));
   return (0);
}

static int  ft_four3(int **stack)
{
   ft_printf("%s%s", ft_ra(stack), ft_ra(stack));
   if (ft_is_sorted(stack[0], 3) == 1)
      return (0);
   ft_printf("%s", ft_pb(stack));
   ft_sort_three(stack);
   ft_printf("%s", ft_pa(stack));
   return (0);
}

static int  ft_four4(int **stack)
{
   ft_printf("%s", ft_rra(stack));
   if (ft_is_sorted(stack[0], 3) == 1)
      return (0);
   ft_printf("%s", ft_pb(stack));
   ft_sort_three(stack);
   ft_printf("%s", ft_pa(stack));
   return (0);
}

int   ft_sort_four(int **stack)
{
   if ((stack[0][1] < stack[0][2]) && (stack[0][1] < stack[0][3]) &&
   (stack[0][1] < stack[0][4]))
      ft_four1(stack);
   if ((stack[0][1] > stack[0][2]) && (stack[0][2] < stack[0][3]) &&
   (stack[0][2] < stack[0][4]))
      ft_four2(stack);
   if ((stack[0][3] < stack[0][2]) && (stack[0][1] > stack[0][3]) &&
   (stack[0][3] < stack[0][4]))
      ft_four3(stack);
   if ((stack[0][4] < stack[0][2]) && (stack[0][4] < stack[0][3]) &&
   (stack[0][1] > stack[0][4]))
      ft_four4(stack);
   return (0);
}
