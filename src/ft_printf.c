/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 23:15:39 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/25 14:43:32 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

static int	ft_eval_format(const char format, va_list args)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_print_c(va_arg(args, int));
	else if (format == 's')
		len += ft_print_s(va_arg(args, char *));
	else if (format == 'i' || format == 'd')
		len += ft_print_num(va_arg(args, int));
	else if (format == 'u' )
		len += ft_print_u(va_arg(args, int));
	else if (format == 'x' || format == 'X')
		len += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == 'p')
		len += ft_print_p(va_arg(args, size_t));
	else if (format == '%')
		len += ft_print_c(format);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
			len += ft_print_c(*format);
		else
			len += ft_eval_format(*++format, args);
		format++;
	}
	va_end(args);
	return (len);
}
