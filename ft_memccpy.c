/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 23:37:55 by rpohlen           #+#    #+#             */
/*   Updated: 2021/11/13 19:56:52 by rpohlen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;

	if (dest == NULL || src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (((char *)dest)[i] == (char)c)
			return (dest + i + 1);
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (NULL);
}
