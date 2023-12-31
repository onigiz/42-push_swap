/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:20:51 by onigiz            #+#    #+#             */
/*   Updated: 2023/08/23 02:28:47 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		kind(char a, va_list args);
int		ft_printf(const char *s, ...);
int		ft_print_str(char *str);
size_t	ft_strlen(const char *s);
int		hex_putnbr(unsigned int n, char *hex);
int		unsigned_putnbr(unsigned int n);
int		ft_point_print(unsigned long n, char *hex);
int		putnbr(int n);
int		ft_putchar(char c);
int		pointer(unsigned long n, char *hex);
int		ft_putstr(char *str);

#endif
