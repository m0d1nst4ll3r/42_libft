/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:41:33 by rpohlen           #+#    #+#             */
/*   Updated: 2021/11/22 15:35:03 by rpohlen          ###   ########.fr       */
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
	new = malloc((n + 1) * sizeof(*new));
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
	size_t	end;
	size_t	start;
	char	*new;

	if (s == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s[start] && ft_strchr(set, s[start]))
		start++;
	end = ft_strlen(s);
	while (end > 0 && ft_strchr(set, s[end]))
		end--;
	if (end < start)
		new = st_strndup(s + start, 0);
	else
		new = st_strndup(s + start, end - start + 1);
	if (new == NULL)
		return (NULL);
	return (new);
}
