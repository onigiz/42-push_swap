/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 02:57:12 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/10 03:45:51 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	allocate_stacks(t_stack **stacks, int len)
{
	(*stacks) = malloc(sizeof(t_stack));
	if (!(*stacks))
		error_handle(*stacks);
	(*stacks)->stacka = malloc(sizeof(int) * (len));
	(*stacks)->stackb = malloc(sizeof(int) * (len));
	if (!(*stacks)->stacka || !(*stacks)->stackb)
		error_handle(*stacks);
	(*stacks)->topa = -1;
	(*stacks)->topb = -1; 
}

int flen2d(char **str)
{
    int i;

    i = 0;
    while (str[i] != NULL)
        i++;
    return(i);
}

char **splitted_str1av(char **av)
{
    char **splitted;

    splitted = fsplit(av[1], ' ');
    return(splitted);
}

t_stack *one_arg_init(char **av)
{
    t_stack *stacks;
    char **splitted;
    int i;
    int len;

    i = 0;
    stacks = NULL;
    splitted = splitted_str1av(av);
    len = flen2d(splitted);
    allocate_stacks(&stacks, len);
    while (splitted[i])
    {
        stacks->stacka[i] = fatoi(splitted[len - i - 1]);
        free (splitted[len - 1 - i]);
        stacks->topa++;
        i++;
    }
    free(splitted);
    return (stacks);
}

