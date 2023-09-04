/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fstrjoin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 03:38:29 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/04 15:19:50 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*fstrjoin(char *str1, char *str2)
{
	char	*joined;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!str1 | !str2)
		return (0);
	joined = malloc(flen(str1) + flen(str2) + 1);
	if (!joined)
		return (0);
	while (i < flen(str1))
	{
		joined[i] = str1[i];
		i++;
	}
	while (j < flen(str2))
	{
		joined[i] = str2[j];
		i++;
		j++;
	}
	joined[i] = '\0';
	free((void*)str1);
	return (joined);
}
