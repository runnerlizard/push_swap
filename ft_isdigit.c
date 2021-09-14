#include "push_swap.h"

int	ft_isdigit (char *s)
{
	int	i;

	i = 0;
	if (((s[0] == '-') || (s[0] == '+')) && ((s[1] >= '0') || (s[1] <= '9'))) 
		i++;
	while ((s[i] >= '0') && (s[i] <= '9'))
		i++;
	if ((i < 1) || (s[i] != '\0'))
		return (0);
	return (1);
}