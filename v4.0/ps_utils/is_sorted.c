/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:11:26 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/07 21:11:43 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_utils.h"

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
