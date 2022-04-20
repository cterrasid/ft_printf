/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 23:01:08 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/20 14:52:16 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define HEX_LOW "0123456789abcdef"
# define HEX_UP "0123456789ABCDEF"
# define LEN_BASE 16

# include <stdarg.h>
# include <stdio.h>
# include "libft.h"

size_t	ft_printchar(int c);

size_t	ft_printhex(int n, char *base);

size_t	ft_printnum(int n);

size_t	ft_printstr(char *s);

size_t	ft_printunum(int n);

int		ft_printf(const char *format, ...);

#endif /* FT_PRINTF_H */
