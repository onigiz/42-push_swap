/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:28:38 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/05 01:53:57 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "utils/utils.h"

void	pa(t_stack *stacks);
void	pb(t_stack *stacks);
void	rra_raw(int *stacka, int topa);
void	rrb_raw(int *stackb, int topb);
void	rra(int *stacka, int topa);
void	rrb(int *stackb, int topb);
void	rrr(t_stack *stacks);

#endif
