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
	return (0);
}

static int	ft_input (char **agrv, int *a)
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
	if (ft_split_atoi(a, s) != 0)
		return(0);
	i = 0;
	ft_replace(a, a[0]);
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
	stack[1] = (int *)malloc(sizeof(int) * (argc + 1));
	stack[2] = (int *)malloc(sizeof(int) * 10000);
	stack[3] = (int *)malloc(sizeof(int) * 100);
	stack[1][0] = 0;
	stack[2][0] = 0;
	ft_movescount(stack);
	ft_sort(stack);
	return (0);
}