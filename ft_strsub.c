/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:32:40 by rpohlen           #+#    #+#             */
/*   Updated: 2021/11/13 02:22:11 by rpohlen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Extra feature:
//		If start and len do not represent a valid substring of s,
//			len will be shortened to the minimum valid value
//			or 0 if no minimum value exists
//		If start is beyond the end of s, len is considered to be 0
//		If start is before the end, but len goes beyond, len is
//			brought back to a value that fits inside of s
//	This means that at worst, the function will return an
//		empty string, and will never segfault
//		(barring a bad pointer)
//	The function will still return NULL in case of bad pointer
//		or failed malloc
char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	slen;

	if (! s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		len = 0;
	else if (start + len > slen)
		len = slen - start;
	new = (char *)malloc((len + 1) * sizeof(*new));
	if (! new)
		return (NULL);
	new = ft_strncpy(new, s + start, len);
	new[len] = 0;
	return (new);
}
