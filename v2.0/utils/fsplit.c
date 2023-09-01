/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fsplit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 03:38:14 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/01 03:39:52 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	**fsplit(const char *str, char c)
{
	char	**splitted;
	int	start;
	int	i;
	int	j;

	start = 0;
	i = 0;
	j = 0;
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
		{
			i++;
		}
	}
	return (splitted);
}
