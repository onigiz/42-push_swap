/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fstrjoin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 01:48:26 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/10 01:56:06 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char    *fstrjoin(char *str1, char *str2)
{
    char *joined;
    int i;
    int j;

    joined = malloc(sizeof(char) * (flen(str1) + flen(str2) + 1));
    if (!joined)
        return (NULL);
    i = 0;
    j = 0;
    while (str1[i])
        joined[j++] = str1[i++];
    i = 0;
    while (str2[i])
        joined[j++]= str2[i++];
    joined[j] = '\0';
    return (joined);
}