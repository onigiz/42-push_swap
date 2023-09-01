/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fstrjoin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 03:38:29 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/01 18:48:39 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sub_utils.h"

char	*fstrjoin(char *str1, char *str2)
{
	char	*joined;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!str1 | !str2)
		return (0);
	joined = malloc(fstrlen(str1) + fstrlen(str2) + 1);
	if (!joined)
		return (0);
	while (i < fstrlen(str1))
	{
		joined[i] = str1[i];
		i++;
	}
	while (j < fstrlen(str2))
	{
		joined[i] = str2[j];
		i++;
		j++;
	}
	joined[i] = '\0';
	return (joined);
}
