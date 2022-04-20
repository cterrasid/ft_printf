/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:22:07 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/20 14:47:53 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

size_t	ft_printhex(int n, char *base)
{
	size_t			len;
	unsigned int	num;

	len = 0;
	num = n;
	if (num < LEN_BASE)
		len += ft_printchar(*(base + num));
	if (num >= LEN_BASE)
	{
		len += ft_printhex(num / LEN_BASE, base);
		len += ft_printhex(num % LEN_BASE, base);
	}
	return (len);
}
