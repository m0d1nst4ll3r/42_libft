/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:41:33 by rpohlen           #+#    #+#             */
/*   Updated: 2021/11/21 15:11:12 by rpohlen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*st_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*new;

	if (s == NULL)
		return (NULL);
	i = 0;
	new = (char *)malloc((n + 1) * sizeof(*new));
	if (new == NULL)
		return (NULL);
	while (s[i] && i < n)
	{
		new[i] = s[i];
		i++;
	}
	new[i] = 0;
	return (new);
}

//	If s only contains characters inside set
//	The new string will be empty
char	*ft_strtrim(const char *s, const char *set)
{
	size_t	i;
	size_t	start;
	char	*new;

	if (s == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (s[i] && strchr(set, s[i]))
		i++;
	start = i;
	while (s[i] && strchr(set, s[i]))
		i++;
	new = st_strndup(s + start, i - start + 1);
	if (new == NULL)
		return (NULL);
	return (new);
}
