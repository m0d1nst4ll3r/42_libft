/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 22:52:44 by rpohlen           #+#    #+#             */
/*   Updated: 2021/11/13 20:44:47 by rpohlen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	ndlen;
	size_t	hslen;
	size_t	i;
	size_t	j;

	if (haystack == NULL || needle == NULL)
		return (NULL);
	ndlen = ft_strlen(needle);
	hslen = ft_strlen(haystack);
	i = 0;
	while (i < n && n - i >= ndlen && hslen - i >= ndlen)
	{
		j = 0;
		while (needle[j] && haystack[i] == needle[j])
			j++;
		if (! needle[j])
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
