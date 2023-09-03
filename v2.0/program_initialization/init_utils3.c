/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_utils3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 03:29:13 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/03 03:51:26 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char    **connect_args(int ac, char **av)
{
    char **to_return;
    char *string;
    int i;

    i = 1;
    string = malloc(1);
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

void	check_duplicates(t_stack *stacks)
{
	int	i;
	int	j;

	i = 0;
	while (i < stacks->topa)
	{
		j = i + 1;
		while (j <= stacks->topa)
		{
			if (stacks->stacka[i] == stacks->stacka[j])
				error(stacks);
			j++;
		}
		i++;
	}
}

t_stack *initialize_stacka(int ac, char **av)
{
    t_stack *stacks;
    char **new_av;
    int new_av_len;

    stacks = NULL;
    new_av = NULL;
    new_av_len = 0;
    if (ac < 2)
        error(stacks);
    else if (ac == 2)
        stacks = split_and_check(av);
    else if (ac > 2)
    {
        new_av = connect_args(ac, av); 
        new_av_len = ptr_arr_len(new_av);
        stacks = args_and_check(new_av_len, new_av);  
    }
    check_duplicates(stacks);
    return (stacks);        
}

