/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 14:36:59 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/17 13:12:39 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int num;
	unsigned int x;

	num = 0;
	x = 0;
	while (dest[num])
		num++;
	while (src[x] != 0 && x < nb)
	{
		dest[num + x] = src[x];
		x++;
	}
	dest[num + x] = 0;
	return (dest);
}
