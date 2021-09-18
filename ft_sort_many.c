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
        middle = middle + stack[3][i++];
        ft_move(stack, middle);
    }
    ft_sort_rem(stack);
    while (stack[3][0] > 0) //untill there is elements moved to b
    {
        i = stack[3][0];
        stack[3][i + 1] = 0; //to write pb number
        stack[3][i + 2] = 0; //to write rb number
        if (stack[3][i] > 3) //it means must move from b to a
        {
            middle = (stack[0][0] + 1 + stack[0][0] + stack[3][i]) / 2;
            j = stack[1][0];
            while (stack[3][i]-- > 0)
                if (stack[1][j--] > middle)
                {
                    ft_pa(stack);
                    stack[3][i + 1]--;
                }
                else
                {
                    ft_rb(stack);
                    stack[3][i + 2]++;
                }
            stack[3][i] = stack[3][i + 2];
            while (stack[3][i + 2]-- > 0)
                ft_rrb(stack);
            stack[3][0]++;
        }
        else if (stack[3][i] > 0)
        //move all heap to a and sort
        else if (stack[3][i] > -4)
        //sort rem in a
        else
        {
            middle = (stack[0][0] + 1 + stack[0][0] - stack[3][i]) / 2;
            j = stack[0][0];
            while (stack[3][i]++ < 0)
                if (stack[0][j--] > middle)
                {
                    ft_pb(stack);
                    stack[3][i + 1]++;
                }
                else
                {
                    ft_ra(stack);
                    stack[3][i + 2]--;
                }
            stack[3][i] = stack[3][i + 2];
            while (stack[3][i + 2]++ < 0)
                ft_rra(stack);
            stack[3][0]++;
        }
    }
    return (0);
}