/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:24:18 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/22 11:40:08 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_print_s(char *s)
{
	char	*s1;

	s1 = s;
	if (s == NULL)
	{
		ft_print_s("(null)");
		return (6);
	}
	while (*s)
		ft_print_c(*s++);
	return (s - s1);
}
