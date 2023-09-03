/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len_funcs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:57:12 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/03 22:30:23 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	flen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	flen_2d(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		while (arr[i])
			i++;
	}
	return (i);
}
