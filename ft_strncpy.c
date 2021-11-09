/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 22:27:34 by rpohlen           #+#    #+#             */
/*   Updated: 2021/11/09 22:27:52 by rpohlen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	if (! dest || ! src)
		return (dest);
	i = 0;
	while (i < n && src[i])
		dest[i] = src[i++];
	while (i < n)
		dest[i++] = 0;
	return (dest);
}
