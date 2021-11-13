/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 23:45:08 by rpohlen           #+#    #+#             */
/*   Updated: 2021/11/12 00:37:49 by rpohlen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*temp;

	if (! dest || ! src || ! n)
		return (dest);
	i = 0;
	temp = (char *)malloc(n * sizeof(*temp));
	if (temp == NULL)
		return (dest);
	while (i < n)
	{
		temp[i] = ((const char *)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = temp[i];
		i++;
	}
	free(temp);
	return (dest);
}
