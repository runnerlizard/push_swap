#include "checker.h"

int	ft_memcmp (const void *arr1, const void *arr2)
{
	size_t	i;

	i = 0;
	while ((((unsigned char *)arr1)[i]) || (((unsigned char *)arr2)[i]))
	{
		if (((unsigned char *)arr1)[i] - ((unsigned char *)arr2)[i] != 0)
			return (((unsigned char *)arr1)[i] - ((unsigned char *)arr2)[i]);
		i++;
	}
	return (0);
}
