/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 22:26:41 by rpohlen           #+#    #+#             */
/*   Updated: 2021/11/09 22:31:37 by rpohlen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int		len;
	int		i;
	char	*new;

	if (! str)
		return (str);
	while (str[len])
		len++;
	i = 0;
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (! new)
		return (new);
	while (i < len)
		new[i] = str[i++];
	new[i] = 0;
	return (new);
}
