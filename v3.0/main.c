/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:31:15 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/04 16:07:59 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_stack *stacks;

    if (ac > 1)
    {
        stacks = last_step_initialization(ac, av);
        
        

        free_all(stacks);
    }
    return (0);
}