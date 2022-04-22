/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 13:44:50 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/22 12:20:33 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_print_p(unsigned long int n)
{
	int	len;

	len = 0;
	len += ft_print_s("0x");
	len += ft_print_hex(n, 'p');
	return (len);
}
