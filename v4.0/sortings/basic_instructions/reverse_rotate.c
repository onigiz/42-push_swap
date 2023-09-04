/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:20:19 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/04 14:50:20 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rra_raw(int *stacka, int topa)
{
	int	temp;
	int	i;

	i = 0;
	temp = stacka[0];
	while (i < topa)
	{
		stacka[i] = stacka[i + 1];
		i++;
	}
	stacka[topa] = temp;
}

void	rrb_raw(int *stackb, int topb)
{
	int	temp;
	int	i;

	i = 0;
	temp = stackb[0];
	while (i < topb)
	{
		stackb[topb] = stackb[topb + 1];
		i++;
	}
	stackb[topb] = temp;
}

void	rra(int *stacka, int topa)
{
	rra_raw(stacka, topa);
	fprint("rra");
}

void	rrb(int *stackb, int topb)
{
	rrb_raw(stackb, topb);
	fprint("rrb");
}

void	rrr(t_stack *stacks)
{
	rra_raw(stacks->stacka, stacks->topa);
	rrb_raw(stacks->stackb, stacks->topb);
	fprint("rrr");
}
