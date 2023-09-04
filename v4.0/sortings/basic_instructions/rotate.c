/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:12:59 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/04 14:50:26 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ra_raw(int	*stacka, int topa)
{
	int	temp;

	temp = stacka[topa];
	while (topa > 0)
	{
		stacka[topa] = stacka[topa - 1];
		topa--;
	}
	stacka[0] = temp;
}

void	rb_raw(int *stackb, int topb)
{
	int	temp;

	temp = stackb[topb];
	while (topb > 0)
	{
		stackb[topb] = stackb[topb - 1];
		topb--;
	}
	stackb[0] = temp;
}

void	ra(int *stacka, int topa)
{
	ra_raw(stacka, topa);
	fprint("ra");
}

void	rb(int *stackb, int topb)
{
	rb_raw(stackb, topb);
	fprint("rb");
}

void	rr(t_stack *stacks)
{
	ra_raw(stacks->stacka, stacks->topa);
	rb_raw(stacks->stackb, stacks->topb);
	fprint("rr");
}
