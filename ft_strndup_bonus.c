/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:45:33 by rpohlen           #+#    #+#             */
/*   Updated: 2021/11/23 13:37:22 by rpohlen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	strndup ended up being really useful
char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*new;

	if (s == NULL)
		return (NULL);
	i = 0;
	new = ft_strnew(n + 1);
	if (new == NULL)
		return (NULL);
	while (s[i] && i < n)
	{
		new[i] = s[i];
		i++;
	}
	new[i] = 0;
	return (new);
}
