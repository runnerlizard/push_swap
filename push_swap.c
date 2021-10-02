#include "push_swap.h"

static int ft_movescount(int **stack)
{
	int i;
	int	j;

	stack[3][0] = 0;
	i = stack[0][0];
	j = 1;
	while (i > 4)
	{
		stack[3][j] = i / 2;
		stack[3][0]++;
		i = i - stack[3][j];
		j++;
	}
	return (0);
}

static int	ft_input (char **agrv, int **stack)
{
	int		i;
	int		j;
	char	*s;
	
	i = 1;
	j = 1;
	while (agrv[i])
		j = j + ft_strlen(agrv[i++]);
	s = (char *)malloc(j * sizeof(char));
	s[0] = 0;
	s = ft_strjoin(s, agrv[0]);
	i = 1;
	while (agrv[i])
		s = ft_strjoin(s, agrv[i++]);
	if (ft_split_atoi(stack[1], s) != 0)
		return(0);
	i = 0;
	ft_replace(stack);
	return (-1);
}

static int ft_malloc_stack2(int **stack, int i)
{
	if ((stack[2] = (int *)malloc(i * 30 * sizeof(int))) == NULL)
	{
		free(stack[0]);
		free(stack[1]);
		free(stack);
		return (88);
	}
	if ((stack[3] = (int *)malloc(10 * sizeof(int))) == NULL)
	{
		free(stack[0]);
		free(stack[1]);
		free(stack[2]);
		free(stack);
		return (88);
	}
	return (0);
}

static int ft_malloc_stack(int **stack, char **argv)
{
	int	i;

	i = ft_count_argv(argv) + 1;
	stack[0] = (int *)malloc(i * sizeof(int));
	if (stack[0] == NULL)
	{
		free(stack);
		return (88);
	}
	stack[1] = (int *)malloc(i * sizeof(int));
	if (stack[1] == NULL)
	{
		free(stack[0]);
		free(stack);
		return (88);
	}
	if (!(argv[1]) || (ft_input(&argv[1], stack) != -1))
	{
		free(stack[0]);
		free(stack[1]);
		free(stack);
		return (1911);
	}
	return (ft_malloc_stack2(stack, i));
}

int main (int argc, char **argv)
{
	int		**stack;
	int		i;

	if ((stack = (int **)malloc(4 * sizeof(int *))) == NULL)
		return (88);
	i = ft_malloc_stack(stack, argv);
	if (i == 88)
		return(ft_printf("Malloc failed!\n"));
	else if ((i == 1911) || (argc == 1))
		return(0);
	stack[1][0] = 0;
	stack[2][0] = 0;
	ft_movescount(stack);
	ft_sort(stack);
	return (0);
}