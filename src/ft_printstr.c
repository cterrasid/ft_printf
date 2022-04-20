/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:24:18 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/20 14:48:07 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

size_t	ft_printstr(char *s)
{
	char	*s1;

	s1 = s;
	if (s == NULL)
	{
		ft_printstr("(null)");
		return (6);
	}
	while (*s)
		ft_printchar(*s++);
	return (s - s1);
}
