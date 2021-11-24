/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 21:33:30 by rpohlen           #+#    #+#             */
/*   Updated: 2021/11/24 20:21:15 by rpohlen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	itoa_recursive(char *new, long int n, size_t i)
{
	if (n < 0)
	{
		new[0] = '-';
		n = -n;
	}
	if (n > 9)
		itoa_recursive(new, n / 10, i - 1);
	new[i] = n % 10 + '0';
}

static size_t	get_num_chars(int n)
{
	size_t	num;

	if (n == 0)
		return (1);
	num = 0;
	if (n < 0)
		num++;
	while (n)
	{
		num++;
		n /= 10;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	char	*new;
	size_t	len;

	len = get_num_chars(n);
	new = malloc((len + 1) * sizeof(*new));
	if (!new)
		return (NULL);
	new[len] = 0;
	itoa_recursive(new, n, len - 1);
	return (new);
}
