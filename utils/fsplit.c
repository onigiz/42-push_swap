/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fsplit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 15:39:55 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/10 01:42:57 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	word_count(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c && (i != flen(str + 1)))
			count++;
		i++;
	}
	return (count);
}

int	word_len(char *str, int i, char c)
{
	int	start;
	int	len;

	start = i;
	while (str[i] != c && str[i])
		i++;
	len = i - start;
	return (len);
}

void	substr(char *str, int i, char c, char *cpy)
{
	int	end;
	int	x;

	x = 0;
	end = 0;
	while (str[i] && str[i] != c)
	{
		end++;
		i++;
	}
	while (x < end)
	{
		cpy[x] = str[i - end + x];
		x++;
	}
	cpy[x] = '\0';
}

char	**fsplit(char *str, char c)
{
	int		i;
	int		j;
	char	**splitted;

	i = 0;
	j = 0;
	splitted = (char **)malloc(sizeof(char *) * (word_count(str, c) + 1));
	if (!splitted)
		return (NULL);
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;
	while (j < word_count(str, c))
	{
		splitted[j] = (char *)malloc(sizeof(char) * (word_len(str, i, c) + 1));
		if (!splitted[j])
			return (NULL);
		substr(str, i, c, splitted[j]);
		i += word_len(str, i, c);
		while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
			i++;
		j++;
	}
	splitted[j] = NULL;
	return (splitted);
}
