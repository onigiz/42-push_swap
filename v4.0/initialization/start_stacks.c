/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:52:05 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/04 16:56:53 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	start_stacks(t_stack *stacks, int len)
{
	stacks = malloc(sizeof(t_stack));
	if (!stacks)
		return (NULL);
	stacks->stacka = malloc(sizeof(char) * len);
	stacks->stackb = malloc(sizeof(char) * len);
	if (!stacks->stacka || !stacks->stackb)
		return (NULL);
	stacks -> topa = -1;
	stacks -> topb = -1;
}
