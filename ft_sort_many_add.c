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
            stack[3][i]--;
        }
        else if (stack[1][2] > middle)
        {
            ft_printf("%s", ft_sb(stack));
            ft_printf("%s", ft_pa(stack));
            stack[3][i]--;
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
    int j = 0;
    int k = 0;
    int l = 0;

    while (stack[3][0] > 0)
    {
        i = stack[3][0];
        stack[3][i + 1] = 0;
        stack[3][i + 2] = 0;
        ft_print_stack(stack);
        j = 0;
        k = 0;
        while (j++ < stack[3][0])
            k = k + stack[3][j];
        if (stack[1][0] != k)
        {
            ft_printf("\n\n\n\n%d   %d\n\n\n", l, stack[3][i]);
            return(0);
        }
        if (stack[3][i] > 3)
        {
            l = 1;
            ft_move_to_a(stack, i);
        }
        else if (stack[3][i] > 0)
        {
            l = 2;
            ft_move_to_a_and_sort(stack, i);
        }
        else if (stack[3][i] > -4)
        {
            ft_printf("sort a\n");
            return(0);
            ft_sort_a(stack, i);
        }
        else
            ft_move_to_b(stack, i);
    }
    return (l);
}