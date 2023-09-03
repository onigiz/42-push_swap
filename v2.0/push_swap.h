/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:58:36 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/03 03:55:35 by onigiz           ###   ########.fr       */
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

void    all_free(t_stack *stacks);
void    error(t_stack *stacks);
void	result_checker(long result, t_stack *stacks);
long	fatol(const char *str, t_stack *stacks);

void	allocate_stacks(t_stack **stacks, int len);
int		ptr_arr_len(char **input);
t_stack	*split_and_check(char **av);
t_stack	*args_and_check(int ac, char **av);
char    **connect_args(int ac, char **av);
void	check_duplicates(t_stack *stacks);
t_stack *initialize_stacks(int ac, char **av);

#endif
