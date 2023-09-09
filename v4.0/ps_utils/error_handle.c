/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:02:04 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/07 21:03:44 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_utils.h"

void	error_handle(t_stack *stacks)
{
	free_all(stacks);
	write(2, "Error!\n", 7);
	exit(1);
}
