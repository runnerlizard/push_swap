/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluco <cluco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:29:42 by cluco             #+#    #+#             */
/*   Updated: 2021/10/16 15:29:43 by cluco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_args(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[++i])
	{
		j = 0;
		while ((argv[i][j] == ' ') && (argv[i][j]))
			j++;
		if ((argv[i][j] == '-') && (argv[i][j]))
			j++;
		while ((argv[i][j] >= '0') && (argv[i][j] <= '9'))
			j++;
		if (argv[i][j] != '\0')
			exit(ft_printf("Error\n"));
	}
	return (0);
}
