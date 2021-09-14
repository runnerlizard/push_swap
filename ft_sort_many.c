#include "push_swap.h"

static void ft_sort_rem(int **stack)
{
    if (stack[0][0] == 3)
        ft_sort_three(stack);
    else
        ft_sort_four(stack);
}

static void ft_move(int **stack, int middle)
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
    ft_sort_rem(stack);
    return (0);
}