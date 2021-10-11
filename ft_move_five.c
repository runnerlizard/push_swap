#include "push_swap.h"
#include <stdlib.h>

static void	ft_ra_until_top(int **stack, int i)
{
	int	max;

	max = -10;
	while (i-- > 0)
		if (stack[0][stack[0][0] - i] == stack[1][0] + stack[3][stack[3][0] + 1] + stack[3][stack[3][0] + 2])
			max = i;		
	ft_printf("\n%d\n", max);
	if (max > 0)
	{
		while (stack[0][1] != stack[1][1])
		{
			if (stack[3][stack[3][0] + 3] > 0)
			{
				ft_printf("%s", ft_rrr(stack));
				stack[3][stack[3][0] + 3]--;
			}
			else
				ft_printf("%s", ft_rra(stack));
			stack[3][stack[3][0] + 2]--;
			if (stack[0][1] != stack[1][0] - 1)
				ft_printf("%s", ft_pb(stack));
		}
		if ((stack[2][stack[2][0]] == 3) || (stack[0][1] > stack[0][2]))
			stack[3][stack[3][0]]--;
		if (stack[0][1] > stack[0][2])
			ft_printf("%s", ft_sa(stack));
	}
}

static void	ft_rb_until_top(int **stack, int i)
{
	int	max;

	max = -10;
	while (i-- < 0)
		if (stack[1][stack[1][0] - i] == stack[0][0])
			max = i;
	ft_printf("\n\ni - %d\n", i);
	while (max-- > 0)
	{
		if (stack[3][stack[3][0] + 2] > 0)
		{
			ft_printf("%s", ft_rrr(stack));
			stack[3][stack[3][0] + 2]--;
		}
		else
			ft_printf("%s", ft_rrb(stack));
		stack[3][stack[3][0] + 3]--;
		if (stack[1][1] > stack[0][0] - 2)
			ft_printf("%s", ft_pa(stack));
	}
	if (stack[0][1] > stack[0][2])
	{
		ft_printf("%s", ft_sa(stack));
		stack[3][stack[3][0]]--;
	}
}

static void	ft_pa_until_top(int **stack)
{
	if (stack[1][1] == stack[1][0])
		ft_printf("%s", ft_pa(stack));
	else if (stack[1][2] == stack[1][0])
	{
		if (stack[1][1] == stack[1][2] - 1)
		{
			ft_printf("%s", ft_pa(stack));
			ft_printf("%s", ft_pa(stack));
			ft_printf("%s", ft_sa(stack));
			stack[3][stack[3][0]]--;
		}
		else
		{
			ft_printf("%s", ft_rb(stack));
			ft_printf("%s", ft_pa(stack));
			stack[3][stack[3][0] + 3]++;
			ft_printf("rb - %d\n\n", stack[3][stack[3][0] + 3]);
		}
	}
	else
	{
		while ((stack[1][1] != stack[0][0] - stack[3][stack[3][0] + 2] - stack[3][stack[3][0] + 1]) && (stack[1][2] != (stack[0][0] - stack[3][stack[3][0] + 2] - stack[3][stack[3][0] + 1])))
		{
			ft_print_stack(stack);
			ft_printf("%s", ft_pa(stack));
			if ((stack[0][1] == stack[0][0] - stack[3][stack[3][0] + 2] - stack[3][stack[3][0] + 1] - 1) && (stack[3][stack[3][0] + 1] == 0))
			{
				ft_printf("%s", ft_rb(stack));
				stack[3][stack[3][0] + 1]++;
			}
			else
				ft_printf("%s", ft_rr(stack));
			stack[3][stack[3][0] + 2]++;
			stack[3][stack[3][0] + 3]++;
			if (stack[1][0] == 1)
				exit(1);
		}
		if (stack[1][1] < stack[1][2])
			ft_printf("%s", ft_sb(stack));
		ft_printf("%s", ft_pa(stack));
	}
}

void	ft_move_five(int **stack)
{
	stack[3][stack[3][0] + 1] = 0;
	stack[3][stack[3][0] + 2] = 0; //ra
	stack[3][stack[3][0] + 3] = 0; //rb
	while (stack[3][stack[3][0]] != 0)
	{
		if (stack[3][stack[3][0] + 2] > 0)
		{
			ft_print_stack(stack);
			ft_printf("\nN1 - %d %d %d\n", stack[3][stack[3][0] + 2], stack[3][stack[3][0] + 1], stack[3][stack[3][0] + 3]);
			ft_ra_until_top(stack, stack[3][stack[3][0] + 2]);
			ft_printf("\nN1 - %d %d %d\n", stack[3][stack[3][0] + 2], stack[3][stack[3][0] + 1], stack[3][stack[3][0] + 3]);
		}
		else if (stack[3][stack[3][0] + 3] > 0)
		{
			ft_printf("\nN2 - %d %d %d\n", stack[3][stack[3][0] + 2], stack[3][stack[3][0] + 1], stack[3][stack[3][0] + 3]);
			ft_rb_until_top(stack, stack[0][stack[3][0] + 3]);
			ft_printf("\nN2 - %d %d %d\n", stack[3][stack[3][0] + 2], stack[3][stack[3][0] + 1], stack[3][stack[3][0] + 3]);
		}
		else
		{
			ft_print_stack(stack);
			ft_pa_until_top(stack);
			ft_print_stack(stack);
			ft_printf("\nN3 - %d %d %d\n", stack[3][stack[3][0] + 2], stack[3][stack[3][0] + 1], stack[3][stack[3][0] + 3]);
		}
		ft_printf("last - %d\n\n", stack[3][stack[3][0]]);
		stack[3][stack[3][0]]--;
		ft_printf("last - %d\n\n", stack[3][stack[3][0]]);
		ft_print_stack(stack);
	}
	stack[3][0]--;
	ft_print_stack(stack);
}
