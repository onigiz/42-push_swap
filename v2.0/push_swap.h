/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:58:36 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/01 18:49:42 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "sub_utils/sub_utils.h"

typedef struct s_stack{
	int	*stacka;
	int	*stackb;
	int	topa;
	int	topb;
}t_stack;

void	sa_raw(int *stacka, int topa);
void	sb_raw(int *stackb, int topb);
void	ra_raw(int	*stacka, int topa);
void	rb_raw(int *stackb, int topb);
void	rra_raw(int *stacka, int topa);
void	rrb_raw(int *stackb, int topb);
void	sa(int *stacka, int topa);
void	sb(int *stackb, int topb);
void	ss(t_stack *stacks);
void	pa(t_stack *stacks);
void	pb(t_stack *stacks);
void	ra(int *stacka, int topa);
void	rb(int *stackb, int topb);
void	rr(t_stack *stacks);
void	rra(int *stacka, int topa);
void	rrb(int *stackb, int topb);
void	rrr(t_stack *stacks);

#endif
