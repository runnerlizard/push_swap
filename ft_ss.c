#include "push_swap.h"

char *ft_ss (int **stack)
{
	int	i;

	/*if ((stack[2][stack[2][0] - 1] == 2) || (stack[2][stack[2][0] - 1] == 1))
	{
		ft_print_stack(stack);
		stack[5][0] = 900;
		_Exit (EXIT_SUCCESS);
	}*/
	i = stack[0][1];
	stack[0][1] = stack[0][2];
	stack[0][2] = i;
	i = stack[1][1];
	stack[1][1] = stack[1][2];
	stack[1][2] = i;
	stack[2][0]++;
	i = stack[2][0];
	stack[2][i] = 3;
	//ft_printf("%d %d %d\n", stack[2][i], stack[2][i - 1], stack[2][i - 2]);
	return ("ss\n");
}