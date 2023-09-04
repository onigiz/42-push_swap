/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:28:38 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/04 15:05:40 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "utils/utils.h"

void	pb(t_stack *stacks);
void	pa(t_stack *stacks);
void	rra_raw(int *stacka, int topa);
void	rrb_raw(int *stackb, int topb);
void	rra(int *stacka, int topa);
void	rrb(int *stackb, int topb);
void	rrr(t_stack *stacks);
void	ra_raw(int	*stacka, int topa);
void	rb_raw(int *stackb, int topb);
void	ra(int *stacka, int topa);
void	rb(int *stackb, int topb);
void	rr(t_stack *stacks);

void	init_stacks(t_stack **stacks, int len);
t_stack	*split_and_check(char **av);
t_stack *args_and_check(int ac, char **av);
char **connect_args(int ac, char **av);
t_stack *last_step_initialization(int ac, char **av);

#endif
