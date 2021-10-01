#include "push_swap.h"

static void ft_move_to_a(int **stack, int i)
{
    int middle;
    int j;

    middle = (2 * stack[1][0] - stack[3][i]) / 2;
    j = stack[3][i];
    while (j-- > 0)
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
        else if (j > 0)
        {
            ft_printf("%s", ft_rb(stack));
            stack[3][i + 2]++;
        }
    }
    while (stack[3][i + 2]-- > 0)
        ft_printf("%s", ft_rrb(stack));
    stack[3][0]++;
}

static void  ft_move_to_a_and_sort(int **stack, int i)
{
    if (stack[3][i] == 2)
    {
        ft_printf("%s", ft_pa(stack));
        ft_printf("%s", ft_pa(stack));
    }
    else if ((stack[1][3] > stack[1][2]) && (stack[1][3] > stack[1][1]))
	{
        ft_printf("%s", ft_pa(stack));
        ft_printf("%s", ft_sb(stack));
        ft_printf("%s", ft_pa(stack));
        ft_printf("%s", ft_sa(stack));
        ft_printf("%s", ft_pa(stack));
    }
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

static void ft_sort_a(int **stack,int i)
{
    ft_sort_rem(stack, -stack[3][i]);
    stack[3][i] = 0;
    stack[3][0]--;
}

static int ft_move_to_b(int **stack, int i)
{
    int j;
    int middle;

    middle = (2 * stack[1][0] + 1 - stack[3][i]) / 2 + 1;
    j = stack[3][i];
    stack[3][i + 1] = j;
    stack[3][i] = 0;
    stack[3][i + 2] = 0;
    while (j++ < 0)
        if (stack[0][1] < middle)
        {
            ft_printf("%s", ft_pb(stack));
            stack[3][i + 1]++;
            stack[3][i]++;
        }
        else if (stack[0][2] < middle)
        {
            ft_printf("%s", ft_sa(stack));
            ft_printf("%s", ft_pb(stack));
            stack[3][i + 1]++;
            stack[3][i]++;
        }
        else
        {
            ft_printf("%s", ft_ra(stack));
            stack[3][i + 2]++;
        }
    while (stack[3][i + 2]-- > 0)
        ft_printf("%s", ft_rra(stack));
    stack[3][0]++;
    return (0);
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
        j = 0;
        k = 0;
        while (j++ < stack[3][0])
            if (stack[3][j] > 0) 
                k = k + stack[3][j];
        if (stack[1][0] != k)
        {
            return(0);
        }
        if (stack[3][i] > 3)
            ft_move_to_a(stack, i);
        else if (stack[3][i] > 0)
            ft_move_to_a_and_sort(stack, i);
        else if (stack[3][i] > -4)
            ft_sort_a(stack, i);
        else
            ft_move_to_b(stack, i);
    }
    return (l);
}