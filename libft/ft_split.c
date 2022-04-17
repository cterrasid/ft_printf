/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:58:55 by cterrasi          #+#    #+#             */
/*   Updated: 2022/04/16 03:22:22 by cterrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;
	int		state;

	count = 0;
	state = 0;
	while (*s)
	{
		if (*s == c)
			state = 0;
		else if (state == 0)
		{
			state = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static char	*ft_get_word(char const *s, char c)
{
	size_t	i;
	size_t	len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	*ft_set_word(int i, char const *s, char c, char **result)
{
	result[i] = ft_get_word(s, c);
	if (!result[i])
	{
		while (i > 0)
		{
			i--;
			free(result[i]);
		}
		free(result);
		return (NULL);
	}
	return (result[i]);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	words;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	words = ft_count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	while (i < words)
	{
		while (*s == c)
			s++;
		if (*s)
			result[i] = ft_set_word(i, s, c, result);
		while (*s && *s != c)
			s++;
		i++;
	}
	result[i] = 0;
	return (result);
}
