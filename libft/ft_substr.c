/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 04:04:09 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/16 03:22:22 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t max_len)
{
	unsigned int	i;
	size_t			slen;
	size_t			substr_len;
	char			*substring;

	if (!str)
		return (NULL);
	i = 0;
	slen = ft_strlen(str);
	substr_len = ft_strlen(str + start);
	if (slen < start)
		max_len = 0;
	if (substr_len < max_len)
		max_len = substr_len;
	substring = (char *)malloc(sizeof(char) * max_len + 1);
	if (!substring)
		return (NULL);
	while (max_len--)
		substring[i++] = str[start++];
	substring[i] = '\0';
	return (substring);
}
