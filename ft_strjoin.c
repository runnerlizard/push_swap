#include "push_swap.h"

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	while (s1[i])
		i++;
	j = 0;
	if (i > 0)
		s1[i++] = 32;
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}