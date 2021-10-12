#include "push_swap.h"
#include <stdlib.h>

static void	ft_ra_until_top(int **stack, int max)
{
	//ft_printf("N1 - %d %d %d\n", stack[3][stack[3][0] + 1], stack[3][stack[3][0] + 2], stack[3][stack[3][0] + 3]);
	while (stack[0][1] != max)
	{
		if (stack[3][stack[3][0] + 3] > 0)
		{
			ft_printf("%s", ft_rrr(stack));
			stack[3][stack[3][0] + 3]--;
		}
		else
			ft_printf("%s", ft_rra(stack));
		stack[3][stack[3][0] + 2]--;
		if (stack[0][1] < max - 1)
			ft_printf("%s", ft_pb(stack));
	}
	if ((stack[0][1] > stack[0][2]) && (stack[1][1] < stack[1][2]))
	{
		ft_printf("%s", ft_ss(stack));
		stack[3][stack[3][0]]--;
	}
	else if (stack[0][1] > stack[0][2])
	{
		ft_printf("%s", ft_sa(stack));
		stack[3][stack[3][0]]--;
	}
	stack[3][stack[3][0]]--;
}

static void	ft_rb_until_top(int **stack, int max)
{
	//ft_printf("N2 - %d %d %d\n", stack[3][stack[3][0] + 1], stack[3][stack[3][0] + 2], stack[3][stack[3][0] + 3]);
	while (stack[0][1] != max)
	{
		ft_printf("%s", ft_rrb(stack));
		stack[3][stack[3][0] + 3]--;
		if (stack[0][1] > max - 2)
		{
			ft_printf("%s", ft_pa(stack));
			stack[3][stack[3][0]]--;
		}
	}
	if ((stack[0][1] > stack[0][2]) && (stack[1][1] < stack[1][2]))
		ft_printf("%s", ft_ss(stack));
	else if (stack[0][1] > stack[0][2])
		ft_printf("%s", ft_sa(stack));
}

static void	ft_pa_until_top(int **stack, int max)
{
	//ft_printf("N3 - %d %d %d\n", stack[3][stack[3][0] + 1], stack[3][stack[3][0] + 2], stack[3][stack[3][0] + 3]);
	while ((stack[1][1] != max) && (stack[1][2] != max))
	{
		ft_printf("%s", ft_pa(stack));
		if (stack[0][1] == max - 1)
		{
			ft_printf("%s", ft_rb(stack));
			stack[3][stack[3][0]]--;
		}
		else if (stack[1][1] == max - 1)
		{
			ft_printf("%s", ft_pa(stack));
			ft_printf("%s", ft_sa(stack));
			ft_printf("%s", ft_rr(stack));
			stack[3][stack[3][0] + 2]++;
			stack[3][stack[3][0]]--;
		}
		else
		{
			ft_printf("%s", ft_rr(stack));
			stack[3][stack[3][0] + 2]++;
		}
		stack[3][stack[3][0] + 3]++;
	}
	if (stack[1][2] == max)
		ft_printf("%s", ft_sb(stack));
	ft_printf("%s", ft_pa(stack));
	if (stack[0][2] == max - 1)
		ft_printf("%s", ft_sa(stack));
	stack[3][stack[3][0]]--;
}

static int	ft_find_max(int **stack)
{
	int	i;

	i = 0;
	while (i++ < stack[0][0])
		if (stack[0][i] == stack[1][0] + stack[3][stack[3][0] + 2] + stack[3][stack[3][0] + 1])
			return (i);
	i = 0;
	while (i++ < stack[1][0])
		if (stack[1][i] == stack[1][0] + stack[3][stack[3][0] + 2] + stack[3][stack[3][0] + 1])
			return (1000 + i);
	return (-10);
}

void	ft_move_five(int **stack)
{
	int	max;

	stack[3][stack[3][0] + 1] = 0;
	stack[3][stack[3][0] + 2] = 0; //ra
	stack[3][stack[3][0] + 3] = 0; //rb
	while (stack[3][stack[3][0]] != 0)
	{
		max = ft_find_max(stack);
		if (max < 1000)
			ft_ra_until_top(stack, stack[0][max]);
		else if (max - 1000 > stack[1][0] / 2 )
			ft_rb_until_top(stack, stack[1][max - 1000]);
		else
			ft_pa_until_top(stack, stack[1][max - 1000]);
	}
	stack[3][0]--;
}
