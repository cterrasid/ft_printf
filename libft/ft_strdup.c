/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:31:36 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/16 03:22:22 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	s_len;

	s_len = ft_strlen(s);
	d = (char *)malloc(sizeof(char) * s_len + 1);
	if (d == NULL)
		return (NULL);
	ft_memcpy(d, s, s_len);
	d[s_len] = '\0';
	return (d);
}
