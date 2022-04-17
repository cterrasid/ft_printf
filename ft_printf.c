/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 23:15:39 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/17 08:06:35 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ft_printf.h"
#define HEX_LOW "0123456789abcdef"
#define HEX_UP "0123456789ABCDEF"

static void	ft_putnbr_base(int nbr, char *base)
{
	int			len_base;
	long int	num;

	len_base = ft_strlen(base);
	num = nbr;
	if (num < 0)
	{
		ft_putchar_fd('-', 1);
		num *= -1;
	}
	if (num < len_base)
		ft_putchar_fd(base[num], 1);
	if (num >= len_base)
	{
		ft_putnbr_base(num / len_base, base);
		ft_putnbr_base(num % len_base, base);
	}
}

static void	ft_eval_format(const char format, va_list args)
{
	if (format == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	else if (format == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	else if (format == 'i' || format == 'u' || format == 'd')
		ft_putstr_fd(ft_itoa(va_arg(args, int)), 1);
	else if (format == 'x')
		ft_putnbr_base(va_arg(args, unsigned int), HEX_LOW);
	else if (format == 'X')
		ft_putnbr_base(va_arg(args, unsigned int), HEX_UP);
	else if (format == 'p')
		ft_putnbr_base(va_arg(args, unsigned long), HEX_LOW);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;

	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
			ft_putchar_fd(*format, 1);
		else
		{
			if (*(format + 1) == '%')
				ft_putchar_fd(*(format + 1), 1);
			else
				ft_eval_format(*(format + 1), args);
			format++;
		}
		format++;
	}
	va_end(args);
	return ((int)ft_strlen(format));
}

int	main(void)
{
	char			c = 'Z';
	char			s[] = "String";
	int				i = -113;
	unsigned int	ui = 10;
	int				d = 123658;
	int				return_val;

	ft_printf("**** Mine ****\n");
	ft_printf("Char: %c\n", c);
	ft_printf("Str: %s\n", s);
	ft_printf("Int: %i\n", i);
	ft_printf("UInt: %u\n", ui);
	ft_printf("Dec: %d\n", d);
	ft_printf("hex: %x\n", d);
	ft_printf("HEX: %X\n", d);
	ft_printf("void: %p\n", d);
	ft_printf("porc: %%\n\n", d);

	ft_printf("**** Return value ****\n");
	return_val = ft_printf("Char: %c\n", c);
	ft_printf("%i\n\n", return_val);

	printf("**** Original ****\n");
	printf("Char: %c\n", c);
	printf("Str: %s\n", s);
	printf("Int: %i\n", i);
	printf("UInt: %u\n", ui);
	printf("Dec: %d\n", d);
	printf("hex: %x\n", d);
	printf("HEX: %X\n", d);
	printf("void: %p\n", d);
	printf("porc: %%\n\n", d);

	printf("**** Return value ****\n");
	return_val = printf("Char: %c\n", c);
	printf("%i\n", return_val);
	
	return (0);
}
// gcc libft/ft_putchar_fd.c libft/ft_strlen.c ft_printf.c libft/ft_putstr_fd.c libft/ft_itoa.c&& ./a.out

/*TODO
	- investigar bien los formats de printf, especialmente la p.
	- valor de retorno de printf, replicarlo. FALLA :(
*/
