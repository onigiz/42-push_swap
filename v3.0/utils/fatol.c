/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fatol.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 22:38:16 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/03 22:40:42 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

long	fatol(const char *str, t_stack *stacks)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (!str[i])
		ferror(stacks);
	while ((str[i] <= '9' && str[i] >= '0') && str[i])
	{
		result = result * 10 + str[i] - 48;
		int_checker(result, stacks);
	}
	if (!(str[i] <= '9' && str[i] >= '0') && str[i])
		ferror(stacks);
	return (result * sign);
}
