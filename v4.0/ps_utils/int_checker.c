/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:32:19 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/07 20:34:01 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ps_utils.h"

int	int_checker(int number)
{
	if (number > 2147483647 || number < 2147483648)
		return (0);
	return (1);
}