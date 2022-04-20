/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:25:33 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/20 14:48:01 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

size_t	ft_printnum(int n)
{
	size_t	len;
	char	*nstr;

	nstr = ft_itoa(n);
	len = ft_printstr(nstr);
	free(nstr);
	return (len);
}
