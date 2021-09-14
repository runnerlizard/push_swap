#include "push_swap.h"

static int ft_move(int **stack, int middle)
{
    int i;
    int j;

    j = stack[0][0] / 2;
    while (j-- > 0)
    {
        i = ft_nearest(stack[0], middle);
        if (i > 0)
        {
            while (i-- > 1)
                ft_ra(stack);
            ft_pb(stack);
        }
        else
        {
            while (i-- >= -stack[0][0])
                ft_rra(stack);
            ft_pb(stack);
        }
    }
    return (0);
}

int ft_sort_many(int **stack)
{
    int i;
    int middle;

    i = 1;
    middle = 0;
    while (i <= stack[3][0])
    {
        middle = middle + stack[3][i];
        ft_move(stack, middle);
        i++;
    }
    ft_print_stack(stack);
    return (0);
}