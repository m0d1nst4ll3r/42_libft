/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:16:33 by rpohlen           #+#    #+#             */
/*   Updated: 2021/11/13 02:13:52 by rpohlen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	size_t	i;
	char	*new;

	if (! s || ! f)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	new = (char *)malloc((i + 1) * sizeof(*new));
	if (new == NULL)
		return (new);
	i = 0;
	while (s[i])
	{
		new[i] = (*f)(s[i]);
		i++;
	}
	new[i] = 0;
	return (new);
}
