/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:03:08 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/11 15:58:54 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	duplicate_numbers(int num, int *nbrs)
{
	int	i;
	int	y;

	i = 0;
	while (i < num)
	{
		y = 0;
		while (y < num)
		{
			if (y != i && nbrs[i] == nbrs[y])
				return (-1);
			y++;
		}
		i++;
	}
	return (0);
}

char	*union_argv(char **argv, int argc)
{
	char	*aux;
	int		i;
	char	*str;

	str = ft_strdup(argv[1]);
	i = 2;
	while (i < argc)
	{
		aux = str;
		str = ft_strjoin(aux, " ");
		free(aux);
		aux = str;
		str = ft_strjoin(aux, argv[i]);
		free(aux);
		i++;
	}
	return (str);
}