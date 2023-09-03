/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fsplit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 22:42:10 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/03 22:42:11 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*fsubstr(char *str, int start, int end)
{
	char	*substr;
	int		i;

	i = 0;
	substr = malloc((end - start + 1 + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while (start <= end)
	{
		substr[i] = str[start];
		i++;
		start++;
	}
	substr[start] = '\0';
	return (substr);
}

int	wcouneter(char *str, char c)
{
	int	i;
	int	counter;

	counter = 1;
	i = 0;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == ' ')
		i++;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
			counter++;
		i++;
	}
	return (counter);
}

char	**fsplit(char *str, char c, int start, int i)
{
	char	**splitted;
	int		j;

	j = 0;
	splitted = malloc(sizeof(char *) * (wcouneter(str, c)));
	if (!splitted)
		return (NULL); 
	while (str[i])
	{
		if (str[i] != c)
		{
			start = i;
			while (str[i] != c)
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
