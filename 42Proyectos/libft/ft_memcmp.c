/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 21:00:56 by apico-su          #+#    #+#             */
/*   Updated: 2021/04/16 17:38:26 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *sx, const void *sy, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			x;

	s1 = (unsigned char *) sx;
	s2 = (unsigned char *) sy;
	x = 0;
	if (!n)
		return (0);
	while (s1[x] == s2[x] && x < n - 1)
		x++;
	return (s1[x] - s2[x]);
}
