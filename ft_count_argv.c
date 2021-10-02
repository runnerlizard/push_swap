/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cluco <cluco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:14:22 by cluco             #+#    #+#             */
/*   Updated: 2021/10/02 15:14:23 by cluco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_count_argv(char **argv)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	n = 0;
	while (argv[i++ + 1])
	{
		j = 0;
		while ((argv[i][j] == ' ') && (argv[i][j]))
			j++;
		while ((argv[i][j] != ' ') && (argv[i][j]))
			j++;
		n++;
	}
	return (n);
}
