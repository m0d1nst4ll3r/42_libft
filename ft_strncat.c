/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 22:29:33 by rpohlen           #+#    #+#             */
/*   Updated: 2021/11/09 22:29:42 by rpohlen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	int	i;
	int	j;

	if (! dest || ! src)
		return (dest);
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (j < n && src[j])
		dest[i + j] = src[j++];
	dest[i + j] = 0;
	return (dest);
}
