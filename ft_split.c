/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:48:20 by rpohlen           #+#    #+#             */
/*   Updated: 2021/11/21 15:07:37 by rpohlen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static size_t	get_word_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	free_all(char **new, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(new[i]);
		i++;
	}
	free(new);
}

//	I wish I could have used strndup...
//	Note that in case of any malloc failure, the function
//		will free all successful mallocs thus far before exiting
static char	fill_words(char **new, const char *s, char c, size_t count)
{
	size_t	word;
	size_t	i;
	size_t	len;

	i = 0;
	word = 0;
	while (word < count)
	{
		while (s[i] == c)
			i++;
		len = get_word_len(s + i, c);
		new[word] = (char *)malloc(len + 1);
		if (! new[word])
		{
			free_all(new, word);
			return (1);
		}
		ft_strlcpy(new[word], s + i, len);
		new[word][len] = 0;
		while (s[i] && s[i] != c)
			i++;
		word++;
	}
	new[word] = NULL;
	return (0);
}

char	**ft_split(const char *s, char c)
{
	size_t	count;
	char	**new;

	if (s == NULL)
		return (NULL);
	count = count_words(s, c);
	new = (char **)malloc((count + 1) * sizeof(*new));
	if (new == NULL)
		return (NULL);
	if (fill_words(new, s, c, count))
		return (NULL);
	return (new);
}
