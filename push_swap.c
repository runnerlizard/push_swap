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
		ft_printf("\n%d     %d\n", stack[3][0], stack [3][j]);
		i = i - stack[3][j];
		j++;
	}
	return (0);
}

static int	ft_replace (int *a)
{
	int	i;
	int	j;
	int	pos;
	int	*b;

	b = (int *)malloc(sizeof(int) * a[0]);
	i = 0;
	while (i++ < (a[0]))
	{
		j = 1;
		pos = 1;
		while (j <= a[0])
			if (a[i] > a[j++])
				pos++;
		b[i - 1] = pos;
	}
	i = a[0] + 1;
	while (i-- > 1)
		a[i] = b[i - 1];
	free(b);
	return (0);
}

static int	ft_check_duplicate (char **input, int *a)
{
	int				i;
	long long int	n;
	
	i = 0;
	a[0] = 0;
	while (input[i])
	{
		if ((n = ft_atoi(input[i])) == 2147483649)
			return(ft_printf("Error4\n"));
		a[0]++;
		a[1 + i++] = n;
	}
	while (i > 1)
	{
		n = i - 1;
		while (n > 0)
			if (a[i] == a[n--])
				return(ft_printf("Error3\n"));
		i--;
	}
	return (-1);
}

static int	ft_input (int agrc, char **agrv, int *a)
{
	int		i;
	char	*s;
	char	**input;

	s = (char *)malloc(1);
	s[0] = 0;
	s = ft_strjoin(s, agrv[0]);
	i = 1;
	while (agrv[i] != NULL)
		s = ft_strjoin(s, agrv[i++]);
	input = ft_split(s, 32);
	free(s);
	if ((input == NULL) || (agrc < 3))
	{
		i = 0;
		while (input[i])
			free(input[i++]);
		free(input);
		if (input == NULL)
			return (ft_printf("Error2\n"));
		return (0);
	}
	i = 0;
	while (input[i])
		if (ft_isdigit(input[i++]) != 1)
		{
			i = 0;
			while (input[i])
				free(input[i++]);
			free(input);
			return (ft_printf("Error1\n"));
		}
	if (ft_check_duplicate(input, a) > 0)
		return(1911);
	ft_replace(a);
	return (-1);
}

int main (int argc, char **argv)
{
	int		**stack;

	stack = (int **)malloc(4 * sizeof(int *));
	stack[0] = (int *)malloc(argc * sizeof(int));
	if ((argc == 1) || (ft_input(argc, &argv[1], stack[0]) != -1))
		return (0);
	stack[1] = (int *)malloc(sizeof(int) * (argc + 1));
	stack[2] = (int *)malloc(11500);
	stack[3] = (int *)malloc(sizeof(int) * 10);
	stack[1][0] = 0;
	stack[2][0] = 0;
	ft_movescount(stack);
	ft_sort(stack);
	return (0);
}