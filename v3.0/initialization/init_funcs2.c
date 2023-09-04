/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_funcs2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:51:14 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/04 14:48:41 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack *args_and_check(int ac, char **av)
{
    t_stack *stacks;
    int i;

    stacks = NULL;
    init_stacks(&stacks, ac);
    i = 0;
    while (i < ac)
    {
        stacks->topa++;
        stacks->stacka[i] = fatol(av[ac - i - 1], stacks);
        i++;
    }
    while (i >= 0)
    {
        free(av[i]);
        i--;
    }
    free(av);
    return (stacks);
}

char **connect_args(int ac, char **av)
{
    char **to_return;
    char *string;
    int i;

    i = 1;
    string = malloc(sizeof(char));
    string[0] = '\0';
    while (i < ac)
    {
        string = fstrjoin(string, " ");
        string = fstrjoin(string, av[i]);
        i++;
    }
    to_return = fsplit(string, ' ', 0, 0);
    free(string);
    return (to_return);
}