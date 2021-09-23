#include "checker.h"

static int ft_implement(int **stack, char *s)
{
	if (ft_strcmp(s, 'sa') == 1)
		ft_sa(stack);
	else if (ft_strcmp(s, 'sb') == 1)
		ft_sb(stack);
	else if (ft_strcmp(s, 'ss') == 1)
		ft_ss(stack);
	else if (ft_strcmp(s, 'ra') == 1)
		ft_ra(stack);
	else if (ft_strcmp(s, 'rb') == 1)
		ft_rb(stack);
	else if (ft_strcmp(s, 'rra') == 1)
		ft_rra(stack);
	else if (ft_strcmp(s, 'rrb') == 1)
		ft_rrb(stack);
	else if (ft_strcmp(s, 'rrr') == 1)
		ft_rrr(stack);
	else if (ft_strcmp(s, 'rr') == 1)
		ft_rr(stack);
	else if (ft_strcmp(s, 'pa') == 1)
		ft_pa(stack);
	else if (ft_strcmp(s, 'pb') == 1)
		ft_pb(stack);
	else
		return (-1);
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
	free(s);
	i = 0;
	ft_replace(a);
	return (-1);
}

int main (int argc, char **argv)
{
	int		**stack;
    char    *s[3];

	stack = (int **)malloc(3 * sizeof(int *));
	stack[0] = (int *)malloc(argc * sizeof(int));
	if ((argc == 1) || (ft_input(&argv[1], stack[0]) != -1))
		return (0);
	stack[1] = (int *)malloc(sizeof(int) * argc);
	stack[2] = (int *)malloc(sizeof(int) * 50);
	stack[1][0] = 0;
	stack[2][0] = 0;
    ft_printf("Input commands: pa pb ra rb rr rra rrb rrr sa sb ss\nInput something else for finish\n");
    while (1 == 1)
    {
        scanf("%s", s);
        if (ft_implement(stack, s) == -1)
            break;
    }
    if ((ft_is_sorted(stack[0], stack[0][0]) == 1) && (stack[1][0] == 0))
        return (ft_printf("OK"));
    else
        return (ft_printf("KO"));
}