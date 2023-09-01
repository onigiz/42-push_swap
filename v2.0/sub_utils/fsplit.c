/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fsplit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 03:38:14 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/01 18:48:53 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sub_utils.h"

char	**fsplit(const char *str, char c, int start, int j)
{
	char	**splitted;
	int		i;

	i = 0;
	if (!str)
		return (NULL);
	splitted = (char **)malloc(sizeof(char *) * wcounter(str, c));
	if (!splitted)
		return (NULL);
	while (str[i])
	{
		if (str[i] != c)
		{
			start = i;
			while (str[i] && str[i] != c)
				i++;
			splitted[j] = fsubstr(str, start, i);
			if (!splitted[j])
				return (NULL);
			j++;
		}
		else
			i++;
	}
	return (splitted);
}
