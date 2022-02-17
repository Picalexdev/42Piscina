/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 12:29:53 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/11 11:10:16 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int a;
	unsigned int x;

	a = 0;
	x = 0;
	while (src[x] != 0)
		x++;
	while (a < size - 1 && size >= 2)
	{
		if (a <= x - 1)
			dest[a] = src[a];
		else
			dest[a] = 0;
		a++;
	}
	if (size != 0)
		dest[a] = 0;
	return (x);
}
