#include "push_swap.h"

int	ft_count_argv(char **argv)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	j = 0;
	n = 0;
	while (argv[i++])
	{
		while ((argv[i][j] == ' ') && (argv[i][j]))
			j++;
		while ((argv[i][j] != ' ') && (argv[i][j]))
			j++;
		n++;
	}
	return (n);
}