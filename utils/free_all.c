/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:59:13 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/10 01:29:16 by onigiz           ###   ########.fr       */
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
