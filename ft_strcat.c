/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 22:24:56 by rpohlen           #+#    #+#             */
/*   Updated: 2021/11/09 22:30:12 by rpohlen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	if (! dest || ! src)
		return (dest);
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		dest[i + j] = src[j++];
	dest[i + j] = 0;
	return (dest);
}
