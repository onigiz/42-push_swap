/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:01:59 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/01 18:50:12 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_stack *stacks)
{
	int	temp;

	temp = stacks->stacka[stacks->topa];
	stacks->topa--;
	stacks->topb++;
	stacks->stackb[stacks->topb] = temp;
	fprint("pb");
}

void	pa(t_stack *stacks)
{
	int	temp;

	temp = stacks->stackb[stacks->topb];
	stacks->topb--;
	stacks->topa++;
	stacks->stacka[stacks->topa] = temp;
	fprint("pa");
}
