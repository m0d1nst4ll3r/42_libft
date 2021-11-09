/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 22:35:01 by rpohlen           #+#    #+#             */
/*   Updated: 2021/11/09 22:47:45 by rpohlen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcat(char *dest, char *src, unsigned int n)
{
	int	dstlen;
	int	srclen;
	int	i;

	if (! dest || ! src)
		return (0);
	dstlen = 0;
	srclen = 0;
	while (src[srclen])
		srclen++;
	while (dstlen < n && dest[dstlen])
		dstlen++;
	if (dstlen <= n + 1)
		return (dstlen + srclen);
	i = 0;
	while (dstlen + i < n - 1 && src[i])
		dest[dstlen + i] = src[i];
	dest[dstlen + i] = 0;
	return (dstlen + srclen);
}
