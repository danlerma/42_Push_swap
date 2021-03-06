/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:03:08 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/31 05:49:26 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	is_sorted(t_list **stack, int num)
{
	t_list	*temp;
	int		i;

	temp = *stack;
	i = 0;
	while (i < num - 1 && temp->next != NULL)
	{
		if (temp->content > temp->next->content)
			return (1);
		temp = temp->next;
		i++;
	}
	return (0);
}

int	ft_binary(int content, int bit)
{
	if (!content)
		return (1);
	content >>= bit;
	if (content & 1)
		return (0);
	else
		return (1);
}

void	ft_check_binary(int num, int *pos, t_list **sa, t_list **sb)
{
	t_list	*temp;

	temp = *sa;
	if (ft_binary(temp->content, *pos) == 1)
	{
		temp = temp->next;
		ft_push(sa, sb, num, 1);
	}
	else
	{
		temp = temp->next;
		ft_rotate_up(sa, num, 0);
	}
}

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
