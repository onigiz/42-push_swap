/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_funcs3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:55:11 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/04 14:59:16 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack *last_step_initialization(int ac, char **av)
{
    t_stack *stacks;
    int new_av_len;
    char **new_av;

    stacks = NULL;
    new_av = NULL;
    new_av_len = 0;

    if (ac < 2)
        ferror(stacks);
    else if (ac == 2)
        stacks = split_and_check(av);
    else if (ac > 2)
    {
        new_av = connect_args(ac, av);
        new_av_len = flen_2d(new_av);
        stacks = args_and_check(new_av_len, new_av);
    }
    stacka_check_duplicates(stacks);
    return (stacks);
}