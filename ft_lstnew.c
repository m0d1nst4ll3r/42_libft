/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:23:24 by rpohlen           #+#    #+#             */
/*   Updated: 2021/11/14 13:36:10 by rpohlen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	if (content == NULL)
		content_size = 0;
	else
	{
		new->content = ft_memdup(content, content_size);
		if (new->content == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->content_size = content_size;
	new->next = NULL;
	return (new);
}
