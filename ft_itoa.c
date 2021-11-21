/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 21:33:30 by rpohlen           #+#    #+#             */
/*   Updated: 2021/11/21 15:03:43 by rpohlen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*realloc_byte(const char *old, char c)
{
	size_t	len;
	char	*new;

	len = 0;
	if (old != NULL)
		len = ft_strlen(old);
	new = (char *)malloc((len + 2) * sizeof(*new));
	if (new == NULL)
		return (NULL);
	if (old != NULL)
		ft_strlcpy(new, old, len + 1);
	new[len] = c;
	new[len + 1] = 0;
	return (new);
}

static void	itoa_recursive(char **new, long int n)
{
	if (n < 0)
	{
		*new = realloc_byte(*new, '-');
		n = -n;
	}
	if (n > 9)
		itoa_recursive(new, n / 10);
	*new = realloc_byte(*new, n % 10 + '0');
}

char	*ft_itoa(int n)
{
	char	*new;

	new = NULL;
	itoa_recursive(&new, n);
	return (new);
}
