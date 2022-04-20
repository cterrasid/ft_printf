/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:29:47 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/20 14:48:13 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

static size_t	ft_nbrlen(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n != 0)
	{
		(n /= 10);
		len++;
	}
	return (len);
}

static char	*ft_uitoa(int n)
{
	size_t			unlen;
	char			*unstr;
	unsigned int	unbr;

	unlen = ft_nbrlen(n);
	unbr = n;
	unstr = (char *)malloc(sizeof(char) * (unlen + 1));
	if (!unstr)
		return (NULL);
	*(unstr + unlen--) = '\0';
	if (unbr == 0)
		*(unstr + unlen) = '0';
	while (unbr > 0)
	{
		*(unstr + unlen--) = '0' + (unbr % 10);
		unbr /= 10;
	}
	return (unstr);
}

size_t	ft_printunum(int n)
{
	size_t	len;
	char	*unstr;

	unstr = ft_uitoa(n);
	len = ft_printstr(unstr);
	free(unstr);
	return (len);
}
