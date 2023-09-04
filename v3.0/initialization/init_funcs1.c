/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_funcs1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:47:10 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/04 12:54:16 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_stacks(t_stack **stacks, int len)
{
	(*stacks) = malloc(sizeof(t_stack));
	if (!(*stacks))
		ferror ((*stacks));
	(*stacks)->stacka = malloc(sizeof(int) * (len));
	(*stacks)->stackb = malloc(sizeof(int) * (len));
	if (!(*stacks)->stacka || !(*stacks)->stackb)
		ferror((*stacks));
	(*stacks)->topa = -1;
	(*stacks)->topb = -1;
}

t_stack	*split_and_check(char **av)
{
	t_stack	*stacks;
	char	**split;
	int		i;
	int		len;

	stacks = NULL;
	if (av[1][0] == '\0' || av[1][0] == ' ')
		ferror(stacks);
	split = fsplit(av[1], ' ', 0, 0);
	len = flen_2d(split);
	i = 0;
	init_stacks(&stacks, len);
	while (split[i])
	{
		stacks->topa++;
		stacks->stacka[i] = fatol(split[len - i - 1], stacks);
		i++;
	}
	while (split[i--])
		free(split[i]);
	free(split);
	return (stacks);
}
