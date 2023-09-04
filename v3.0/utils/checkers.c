/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 22:33:48 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/04 14:53:58 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	free_all(t_stack *stacks)
{
	free(stacks->stacka);
	stacks->stacka = NULL;
	free(stacks->stackb);
	stacks->stackb = NULL;
	free(stacks);
	stacks = NULL;
}

void	ferror(t_stack *stacks)
{
	write(2, "Error!", 6);
	free_all(stacks);
	exit(1);
}

void	int_checker(long result, t_stack *stacks)
{
	if (result > 2147483647 || result < -2147483648)
		ferror(stacks);
}

int	is_sorted(t_stack *stacks)
{
	int	i;
	int	j;

	i = 0;
	while (i < stacks->topa)
	{
		j = i + 1;
		while (j <= stacks->topa)
		{
			if (stacks->stacka[i] < stacks->stacka[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
}

void	stacka_check_duplicates(t_stack *stacks)
{
	int	i;
	int	j;

	i = 0;
	while (i < stacks->topa)
	{
		j = i + 1;
		while (j <= stacks->topa)
		{
			if (stacks->stacka[i] == stacks->stacka[j])
				ferror(stacks);
			j++;
		}
		i++;
	}
}
