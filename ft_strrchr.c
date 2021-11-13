/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 22:50:50 by rpohlen           #+#    #+#             */
/*   Updated: 2021/11/12 00:47:01 by rpohlen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
		i++;
	while (i != 0)
	{
		if (str[i - 1] == (char)c)
			return ((char *)str + i - 1);
		i--;
	}
	return (NULL);
}
