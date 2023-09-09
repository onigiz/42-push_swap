/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 03:39:19 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/10 01:25:00 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int	*stacka;
	int	*stackb;
	int	topa;
	int	topb;
}t_stack;

void	fprint(char *str);
int		flen(char *str);
int		int_checker(long int number);
int		fatoi(const char *str);
void	free_all(t_stack *stacks);
void	error_handle(t_stack *stacks);
int		is_sorted(t_stack *stacks);
void	is_duplicate(t_stack *stacks);
int		word_count(char *str, char c);
int		word_len(char *str, int i, char c);
void	substr(char *str, int i, char c, char *cpy);
char	**fsplit(char *str, char c);

#endif
