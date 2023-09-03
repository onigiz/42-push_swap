/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_utils1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 19:41:18 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/03 03:23:36 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	allocate_stacks(t_stack **stacks, int len)
{
	(*stacks) = malloc(sizeof(t_stack));
	if (!(*stacks))
		error(*stacks);
	(*stacks)->stacka = malloc(sizeof(int) * (len));
	(*stacks)->stackb = malloc(sizeof(int) * (len));
	if (!(*stacks)->stacka || !(*stacks)->stackb)
		error(*stacks);
	(*stacks)->topa = -1;
	(*stacks)->topb = -1; 
}

int	ptr_arr_len(char **input)
{
	int	i;

	i = 0;
	while (input[i])
		i++;
	return (i);
}

t_stack	*split_and_check(char **av)
{
	t_stack	*stacks;
	char	**split;
	int	    i;
	int	    slen;

	stacks = NULL;
	if (av[1][0] == '\0' || av[1][0] == ' ')
		error(stacks);
	split = fsplit(av[1], ' ', 0, 0);
	slen = ptr_arr_len(split);
	i = 0;
	allocate_stacks(&stacks, slen);
	while (split[i])
	{
		stacks->topa++;
		stacks->stacka[i] = fatol(split[slen - i -1], stacks);
		free(split[slen - i - 1]);
		i++;
	}
	while (i >= 0)
		free(split[i--]);
	free(split);
	return (stacks);
}

t_stack	*args_and_check(int ac, char **av)
{
	t_stack	*stacks;
	int	    i;

	stacks = NULL;
	allocate_stacks(&stacks, ac);
	i = 0;
	while (i < ac)
	{
		stacks->topa++;
		stacks->stacka[i] = fatol(av[ac - i - 1], stacks);
		i++;
	}
	while (i >= 0)
	{
		free(av[i]);
		i--;
	}
	free(av);
	return (stacks);
}
