/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 14:03:28 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/17 16:24:12 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int num;
	int x;

	num = 0;
	x = 0;
	while (dest[num] != 0)
		num++;
	while (src[x] != 0)
	{
		dest[num + x] = src[x];
		x++;
	}
	dest[num + x] = src[x];
	return (dest);
}
