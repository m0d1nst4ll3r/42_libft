/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpohlen <rpohlen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 22:26:08 by rpohlen           #+#    #+#             */
/*   Updated: 2021/11/09 22:26:38 by rpohlen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	if (! dest || ! src)
		return (dest);
	i = 0;
	while (src[i])
		dest[i] = src[i++];
	dest[i] = 0;
	return (dest);
}
