/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 22:52:44 by rpohlen           #+#    #+#             */
/*   Updated: 2021/11/12 00:43:16 by rpohlen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	ndlen;
	size_t	hslen;
	size_t	i;
	size_t	j;

	if (! haystack || ! needle)
		return (NULL);
	ndlen = ft_strlen(needle);
	hslen = ft_strlen(haystack);
	i = 0;
	while (hslen - i >= ndlen)
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
