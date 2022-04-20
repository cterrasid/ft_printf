/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 23:15:39 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/20 14:54:54 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

static size_t	ft_eval_format(const char format, va_list args)
{
	size_t	len;

	len = 0;
	if (format == 'c')
		len += ft_printchar(va_arg(args, int));
	else if (format == 's')
		len += ft_printstr(va_arg(args, char *));
	else if (format == 'i' || format == 'd')
		len += ft_printnum(va_arg(args, int));
	else if (format == 'u' )
		len += ft_printunum(va_arg(args, int));
	else if (format == 'x')
		len += ft_printhex(va_arg(args, unsigned int), HEX_LOW);
	else if (format == 'X')
		len += ft_printhex(va_arg(args, unsigned int), HEX_UP);
	else if (format == 'p')
	{
		len += ft_printstr("0x");
		len += ft_printhex(va_arg(args, unsigned int), HEX_LOW);
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	len;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
			len += ft_printchar(*format);
		else
		{
			if (*(format + 1) == '%')
				len += ft_printchar(*(format + 1));
			else
				len += ft_eval_format(*(format + 1), args);
			format++;
		}
		format++;
	}
	va_end(args);
	return (len);
}

// int	main(void)
// {
// 	char			c = 'Z';
// 	int				i = -113;
// 	unsigned int	ui = 10;
// 	int				d = -1;
// 	int				c = 0;
// 	int				return_val;
// 	ft_printf("**** Mine ****\n");
// 	ft_printf(" %c %c %c ", '0', 0, '1');
// 	ft_printf(" NULL %s NULL ", NULL);
// 	ft_printf("Int: %i\n", i);
// 	ft_printf("UInt: %u\n", d);
// 	ft_printf("Dec: %d\n", d);
// 	ft_printf("hex: %x\n", d);
// 	ft_printf("HEX: %X\n", d);
// 	ft_printf("porc: %%\n\n", d);
// 	ft_printf("P:  %p %p \n", c, d);
// 	ft_printf("**** Mine Return value ****\n");
// 	return_val = ft_printf("UInt: %u\n", d);
// 	ft_printf("%i\n\n", return_val);
// 	printf("**** Original ****\n");
// 	printf(" %c %c %c ", '0', 0, '1');
// 	printf(" NULL %s NULL ", NULL);
// 	printf("Int: %i\n", i);
// 	printf("UInt: %u\n", d);
// 	printf("Dec: %d\n", d);
// 	printf("hex: %x\n", d);
// 	printf("HEX: %X\n", d);
// 	printf("porc: %%\n\n", d);
// 	printf("P:  %p %p \n", c, d);
// 	printf("**** Original Return value ****\n");
// 	return_val = printf("UInt: %u\n", d);
// 	printf("%i\n", return_val);
// 	return (0);
// }
// gcc libft/ft_putchar_fd.c libft/ft_strlen.c ft_printf.c libft/ft_putstr_fd.c libft/ft_itoa.c&& ./a.out

/*TODO
	- investigar bien los formats de printf, especialmente la p.
*/
