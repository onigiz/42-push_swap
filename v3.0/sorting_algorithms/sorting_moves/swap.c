/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:53:43 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/04 14:50:32 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sa_raw(int *stacka, int topa)
{
	int	temp;

	temp = stacka[topa];
	stacka[topa] = stacka[topa - 1];
	stacka[topa -1] = temp;
}

void	sb_raw(int *stackb, int topb)
{
	int	temp;

	temp = stackb[topb];
	stackb[topb] = stackb[topb - 1];
	stackb[topb -1] = temp;
}

void	sa(int *stacka, int topa)
{
	sa_raw(stacka, topa);
	fprint("sa");
}

void	sb(int *stackb, int topb)
{
	sb_raw(stackb, topb);
	fprint("sb");
}

void	ss(t_stack *stacks)
{
	sa_raw(stacks->stacka, stacks->topa);
	sb_raw(stacks->stackb, stacks->topb);
	fprint("ss");
}
