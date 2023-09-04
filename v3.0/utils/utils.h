/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:28:38 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/04 15:06:18 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack{
	int	*stacka;
	int	*stackb;
	int	topa;
	int	topb;
}t_stack;

void	fprint(char *str);
int		flen(char *str);
int		flen_2d(char *arr[]);
char	*fstrjoin(char *str1, char *str2);
char	*fsubstr(char *str, int start, int end);
int		wcouneter(char *str, char c);
char	**fsplit(char *str, char c, int start, int i);
void	free_all(t_stack *stacks);
void	ferror(t_stack *stacks);
void	int_checker(long result, t_stack *stacks);
int		is_sorted(t_stack *stacks);
long	fatol(const char *str, t_stack *stacks);
void	stacka_check_duplicates(t_stack *stacks);

#endif
