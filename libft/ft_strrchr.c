/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:00:23 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/16 03:22:22 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t	slen;

	slen = ft_strlen(str);
	str += slen;
	if (ch == '\0')
		return ((char *)(str));
	while (slen--)
	{
		str--;
		if (*str == (char)ch)
			return ((char *)(str));
	}
	return (NULL);
}
