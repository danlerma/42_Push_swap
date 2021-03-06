/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:38:41 by dlerma-c          #+#    #+#             */
/*   Updated: 2021/10/31 05:28:04 by dlerma-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	main(int argc, char **argv)
{
	int	num;

	if (argc > 1)
	{
		num = ft_check_errors(argv, argc);
		if (num > 0)
		{
			num = start_sorting(argc, argv, num);
			return (0);
		}
		else if (num == -1)
			write(1, "Error\n", 6);
	}
	return (0);
}
