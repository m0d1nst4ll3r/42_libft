/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:45:33 by rpohlen           #+#    #+#             */
/*   Updated: 2021/11/24 16:04:25 by rpohlen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	use strndup or you'll ndup sad
char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*new;

	i = 0;
	new = ft_strnew(n + 1);
	if (new == NULL)
		return (NULL);
	while (i < n && s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = 0;
	return (new);
}
