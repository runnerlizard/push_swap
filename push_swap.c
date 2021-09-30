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

static int	ft_replace (int *a, int c)
{
	int	i;
	int	j;
	int	pos;
	int	b[c];

	ft_printf("%d\n", a[0]);
	//b = (int *)malloc(a[0] * sizeof(int));
	//if ((b == NULL) || (b == 0))
		//return(ft_printf("9\n"));
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
	ft_printf("1\n");
	i = a[0] + 1;
	while (i-- > 1)
		a[i] = b[i - 1];
	ft_printf("10\n");
	//free(b);
	ft_printf("11\n");
	return (0);
}

static int	ft_input (char **agrv, int *a)
{
	int		i;
	int		j;
	char	*s;
	
	i = 1;
	j = 1;
	ft_printf("1\n");
	while (agrv[i])
		j = j + ft_strlen(agrv[i++]);
	ft_printf("2\n");
	s = (char *)malloc(j * sizeof(char));
	ft_printf("3\n");
	s[0] = 0;
	ft_printf("4\n");
	s = ft_strjoin(s, agrv[0]);
	ft_printf("5\n");
	i = 1;
	ft_printf("6\n");
	while (agrv[i])
		s = ft_strjoin(s, agrv[i++]);
	ft_printf("7\n");
	if (ft_split_atoi(a, s) != 0)
		return(0);
	ft_printf("8\n");
	i = 0;
	ft_replace(a, a[0]);
	ft_printf("11\n");
	return (-1);
}

int main (int argc, char **argv)
{
	int		**stack;

	stack = (int **)malloc(4 * sizeof(int *));
	stack[0] = (int *)malloc(argc * sizeof(int));
	if ((argc == 1) || (ft_input(&argv[1], stack[0]) != -1))
	{
		free(stack[0]);
		free(stack);
		return (0);
	}
	ft_printf("44\n");
	stack[1] = (int *)malloc(sizeof(int) * (argc + 1));
	stack[2] = (int *)malloc(sizeof(int) * 50);
	stack[3] = (int *)malloc(sizeof(int) * 10);
	stack[1][0] = 0;
	stack[2][0] = 0;
	ft_movescount(stack);
	ft_sort(stack);
	ft_print_stack(stack);
	return (0);
}