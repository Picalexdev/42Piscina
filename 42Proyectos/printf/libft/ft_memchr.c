/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 19:10:17 by apico-su          #+#    #+#             */
/*   Updated: 2021/04/16 14:40:30 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	b;
	size_t			x;

	a = (unsigned char *) s;
	b = (unsigned char) c;
	x = 0;
	while (x < n)
	{
		if (a[x] == b)
			return (&a[x]);
		x++;
	}
	return (NULL);
}
