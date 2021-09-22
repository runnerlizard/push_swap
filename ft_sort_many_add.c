#include "push_swap.h"

static void ft_move_to_a(int **stack, int i)
{
    int middle;
    int j;

    middle = (2 * stack[1][0] - stack[3][i]) / 2;
    j = stack[1][0];
    while (stack[3][i]-- > 0)
    {
        if (stack[1][1] > middle)
        {
            ft_printf("%s", ft_pa(stack));
            stack[3][i + 1]--;
        }
        else
        {
            ft_printf("%s", ft_rb(stack));
            stack[3][i + 2]++;
        }
        j--;
    }
    stack[3][i] = stack[3][i + 2];
    while (stack[3][i + 2]-- > 0)
        ft_printf("%s", ft_rrb(stack));
    stack[3][0]++;
}

static void  ft_move_to_a_and_sort(int **stack, int i)
{
    int j;

    j = stack[3][i];
    while (stack[3][i]-- > 0)
        ft_printf("%s", ft_pa(stack));
    stack[3][0]--;
    ft_sort_rem(stack, j);
}

static void ft_sort_a(int **stack,int i)
{
    ft_sort_rem(stack, -stack[3][i]);
    stack[3][i] = 0;
    stack[3][0]--;
}

static void ft_move_to_b(int **stack, int i)
{
    int j;
    int middle;

    middle = (2 * stack[0][0] + stack[3][i]) / 2;
    j = stack[0][0];
    while (stack[3][i]++ < 0)
        if (stack[0][j--] > middle)
        {
            ft_printf("%s", ft_pb(stack));
            stack[3][i + 1]++;
        }
        else
        {
            ft_printf("%s", ft_ra(stack));
            stack[3][i + 2]++;
        }
    stack[3][i] = stack[3][i + 2];
    while (stack[3][i + 2]-- > 0)
        ft_printf("%s", ft_rra(stack));
    j = stack[3][i];
    stack[3][i] = stack[3][i + 1];
    stack[3][i + 1] = j;
    stack[3][0]++;
}

int ft_sort_many_add(int **stack)
{
    int i;

    while (stack[3][0] > 0) //untill there is elements moved to b
    {
        i = stack[3][0];
        stack[3][i + 1] = 0;
        stack[3][i + 2] = 0;
        if (stack[3][i] > 3)
            ft_move_to_a(stack, i);
        else if (stack[3][i] > 0)
            ft_move_to_a_and_sort(stack, i);
        else if (stack[3][i] > -4)
            ft_sort_a(stack, i);
        else
            ft_move_to_b(stack, i);
    }
    return (0);
}