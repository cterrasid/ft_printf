/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 14:51:16 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/22 12:21:12 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_print_hex(unsigned long int n, const char format)
{
	int		len;
	char	*base;

	len = 0;
	base = HEX_LOW;
	if (format == 'X')
		base = HEX_UP;
	if (n < 16)
		len += ft_print_c(*(base + n));
	if (n >= 16)
	{
		len += ft_print_hex(n / 16, format);
		len += ft_print_hex(n % 16, format);
	}
	return (len);
}
