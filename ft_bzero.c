/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 23:28:24 by rpohlen           #+#    #+#             */
/*   Updated: 2021/11/13 19:50:26 by rpohlen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*array;

	if (s == NULL)
		return ;
	i = 0;
	array = (char *)s;
	while (i < n)
	{
		array[i] = 0;
		i++;
	}
}
