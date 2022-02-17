/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 19:45:09 by apico-su          #+#    #+#             */
/*   Updated: 2021/04/16 13:53:53 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	unsigned char	*x;
	size_t			y;

	a = (unsigned char *)src;
	b = (unsigned char *)dst;
	x = 0;
	y = 0;
	while (!x && y < n)
	{
		b[y] = a[y];
		if (a[y] == (unsigned char)c)
			x = b + y + 1;
		y++;
	}
	return (x);
}
