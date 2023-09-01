/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_funcs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 03:39:15 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/01 18:48:33 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sub_utils.h"

void	fprint(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	fstrlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	wcounter(const char *str, const char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 1;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c && (i != 0)
			&& str[i + 1] != '\0')
			counter++;
		i++;
	}
	return (counter);
}

char	*fsubstr(const char *str, unsigned int start, unsigned int end)
{
	int		i;
	char	*result;

	result = malloc((end - start + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (start < end)
	{
		result[i] = str[start];
		i++;
		start++;
	}
	result[i] = '\0';
	return (result);
}
