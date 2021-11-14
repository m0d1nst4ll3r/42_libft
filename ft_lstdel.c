/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 13:50:25 by rpohlen           #+#    #+#             */
/*   Updated: 2021/11/14 13:53:02 by rpohlen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*elem;
	t_list	*next;

	if (alst == NULL || del == NULL)
		return ;
	elem = *alst;
	while (elem)
	{
		next = elem->next;
		ft_lstdelone(&elem, del);
		elem = next;
	}
	*alst = NULL;
}
