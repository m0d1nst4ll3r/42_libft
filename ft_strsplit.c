/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:48:20 by rpohlen           #+#    #+#             */
/*   Updated: 2021/11/13 03:08:35 by rpohlen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;
	char	inword;

	i = 0;
	inword = 0;
	while (s[i])
	{
		if (! inword && s[i] != c)
		{
			inword = 1;
			count++;
		}
		else if (inword && s[i] == c)
			inword = 0;
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

//	This function could use a strndup, as did a few before
//	Note that in case of any malloc failure, the function
//		will free all successful mallocs thus far before exiting
static char	fill_words(char **new, const char *s, char c, size_t count)
{
	size_t	word;
	size_t	i;
	size_t	wlen;

	i = 0;
	word = 0;
	while (word < count)
	{
		while (s[i] == c)
			i++;
		wlen = get_word_len(s + i, c);
		new[word] = ft_strnew(wlen + 1);
		if (! new[word])
		{
			free_all(new, word + 1);
			return (1);
		}
		ft_strncpy(new[word], s + i, wlen);
		new[word][wlen] = 0;
		while (s[i] && s[i] != c)
			i++;
		word++;
	}
	new[word] = 0;
	return (0);
}

char	**ft_strsplit(const char *s, char c)
{
	size_t	count;
	char	**new;

	if (! s)
		return (NULL);
	count = count_words(s, c);
	new = (char **)malloc((count + 1) * sizeof(*new));
	if (! new)
		return (new);
	if (fill_words(new, s, c, count))
		return (NULL);
	return (new);
}
