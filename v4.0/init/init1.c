/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 21:06:54 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/09 21:23:07 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    stacks_allocate(t_stack **stacks, int len)
{
    (*stacks) = malloc(sizeof(t_stack));
    if (!(*stacks))
        return (NULL);
    (*stacks)->stacka = malloc(sizeof(int) * len);
    (*stacks)->stackb = malloc(sizeof(int) * len);
    if (!(*stacks)->stacka || !(*stacks)->stackb)
        error_handle(*stacks);
    (*stacks)->topa = -1;
    (*stacks)->topb = -1;
}

int ptr_err_len(char **input)
{
    int i;

    i = 0;
    while (input[i])
        i++;
    return (i);
}

t_stack *split_and_check(char **av)
{
    t_stack *stacks;
    char **splitted;
    int i;
    int len;

    stacks = NULL;
    if (av[1][0] == '\0' || av[1][0] == ' ')
        error_handle(stacks);
    splitted = fsplit(av, ' ');
    len = ptr_arr_len(splitted);
    i = 0;
    stacks_allocate(&stacks, len);
    while (splitted[i])
    {
        stacks->topa++;
        stacks->stacka[i] = fatoi(splitted[len - i - 1]);
        free(splitted[len - i - 1]);
        i++;
    }
    free (splitted[len + 1]);
    free(splitted);
    return (stacks);
}