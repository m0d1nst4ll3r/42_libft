/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:24:56 by rpohlen           #+#    #+#             */
/*   Updated: 2021/11/21 14:57:59 by rpohlen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*st_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	j;

	if (dest == NULL || src == NULL)
		return (dest);
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

static char	*st_strcpy(char *dest, const char *src)
{
	size_t	i;

	if (dest == NULL || src == NULL)
		return (dest);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	new = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(*new));
	if (! new)
		return (new);
	st_strcpy(new, s1);
	st_strcat(new, s2);
	return (new);
}
