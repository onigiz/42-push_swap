/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_duplicate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:12:41 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/10 01:29:16 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	is_duplicate(t_stack *stacks)
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
				error_handle(stacks);
			j++;
		}
		i++;
	}
}
