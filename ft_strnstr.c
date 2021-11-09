/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 22:52:44 by rpohlen           #+#    #+#             */
/*   Updated: 2021/11/09 23:00:42 by rpohlen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(char *haystack, char *needle, unsigned int n)
{
	int	ndlen;
	int	hslen;
	int	i;
	int	j;

	if (! haystack || ! needle)
		return (0);
	ndlen = 0;
	while (needle[ndlen])
		ndlen++;
	hslen = 0;
	while (haystack[hslen])
		hslen++;
	i = 0;
	while (i < n && n - i >= ndlen && hslen - i >= ndlen)
	{
		j = 0;
		while (needle[j] && haystack[i] == needle[j])
			j++;
		if (! needle[j])
			return (haystack + i);
		i++;
	}
	return (0);
}
