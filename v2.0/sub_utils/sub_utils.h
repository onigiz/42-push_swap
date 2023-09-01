/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 03:39:19 by onigiz            #+#    #+#             */
/*   Updated: 2023/09/01 18:48:06 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUB_UTILS_H
# define SUB_UTILS_H

# include <unistd.h>
# include <stdlib.h>

int		fstrlen(char *s);
char	*fstrjoin(char *str1, char *str2);
int		wcounter(const char *str, const char c);
char	*fsubstr(const char *str, unsigned int start, unsigned int end);
char	**fsplit(const char *str, char c, int start, int j);
void	fprint(char *str);

#endif
