#include "push_swap.h"

static void	ft_move2(int **stack)
{
	ft_printf("%s", ft_pa(stack));
	ft_printf("%s", ft_sb(stack));
	ft_printf("%s", ft_pa(stack));
	ft_printf("%s", ft_sa(stack));
	ft_printf("%s", ft_pa(stack));
}

void	ft_move_to_a_and_sort(int **stack, int i)
{
	if (stack[3][i] == 2)
	{
		ft_printf("%s", ft_pa(stack));
		ft_printf("%s", ft_pa(stack));
	}
	else if ((stack[1][3] > stack[1][2]) && (stack[1][3] > stack[1][1]))
		ft_move2(stack);
	else if ((stack[1][1] > stack[1][2]) && (stack[1][1] > stack[1][3]))
	{
		ft_printf("%s", ft_pa(stack));
		ft_printf("%s", ft_pa(stack));
		ft_printf("%s", ft_pa(stack));
	}
	else if ((stack[1][2] > stack[1][1]) && (stack[1][2] > stack[1][3]))
	{
		ft_printf("%s", ft_sb(stack));
		ft_printf("%s", ft_pa(stack));
		ft_printf("%s", ft_pa(stack));
		ft_printf("%s", ft_pa(stack));
	}
	ft_sort_two(stack);
	stack[3][i] = 0;
	stack[3][0]--;
}

static void	ft_move1(int **stack, int i, int middle)
{
	if (stack[1][1] > middle)
	{
		ft_printf("%s", ft_pa(stack));
		stack[3][i + 1]--;
		stack[3][i]--;
	}
	else if (stack[1][2] > middle)
	{
		ft_printf("%s", ft_sb(stack));
		ft_printf("%s", ft_pa(stack));
		stack[3][i + 1]--;
		stack[3][i]--;
	}
	else if (stack[3][i + 3] > - stack[3][i + 1])
	{
		ft_printf("%s", ft_rb(stack));
		stack[3][i + 2]++;
	}
}

void	ft_sort_a(int **stack, int i)
{
	ft_sort_rem(stack, -stack[3][i]);
	stack[3][i] = 0;
	stack[3][0]--;
}

void	ft_move_to_a(int **stack, int i)
{
	int middle;
	int j;

	middle = (2 * stack[1][0] - stack[3][i]) / 2;
	j = stack[3][i];
	stack[3][i + 3] = j / 2 + j % 2;
	stack[3][i + 1] = 0;
	stack[3][i + 2] = 0;
	while (j-- > 0)
		ft_move1(stack, i, middle);
	while (stack[3][i + 2]-- > 0)
		ft_printf("%s", ft_rrb(stack));
	stack[3][0]++;
}
