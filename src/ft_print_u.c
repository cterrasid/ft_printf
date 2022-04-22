/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 13:43:44 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/22 11:40:44 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

static int	ft_nbrlen(unsigned int n)
{
	int	len;

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
	int				unlen;
	char			*unstr;
	unsigned int	unum;

	unlen = ft_nbrlen(n);
	unum = n;
	unstr = (char *)malloc(sizeof(char) * (unlen + 1));
	if (!unstr)
		return (NULL);
	*(unstr + unlen--) = '\0';
	if (unum == 0)
		*(unstr + unlen) = '0';
	while (unum != 0)
	{
		*(unstr + unlen--) = '0' + (unum % 10);
		unum /= 10;
	}
	return (unstr);
}

int	ft_print_u(int n)
{
	int				len;
	char			*unstr;

	unstr = ft_uitoa(n);
	len = ft_print_s(unstr);
	free(unstr);
	return (len);
}
