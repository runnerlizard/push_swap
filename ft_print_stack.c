#include "push_swap.h"

int ft_print_stack(int **stack)
{
	int i;

	i = 0;
	ft_printf("stack a:");
	while (i <= stack[0][0])
		ft_printf("   %d   ", stack[0][i++]);
	i = 0;
	ft_printf("\nstack b:");
	while (i <= stack[1][0])
		ft_printf("   %d   ", stack[1][i++]);
	i = 0;
	ft_printf("\nactions:");
	while (i <= stack[2][0])
		ft_printf("%d  ", stack[2][i++]);
	ft_printf("\nportions:");
	i = 0;
	while (i <= stack[3][0])
		ft_printf("   %d   ", stack[3][i++]);
	ft_printf("\n");
	return (0);
}