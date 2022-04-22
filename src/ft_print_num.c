/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:25:33 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/22 11:39:55 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_print_num(int n)
{
	int		len;
	char	*nstr;

	nstr = ft_itoa(n);
	len = ft_print_s(nstr);
	free(nstr);
	return (len);
}
