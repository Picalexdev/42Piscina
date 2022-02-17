/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 16:05:28 by apico-su          #+#    #+#             */
/*   Updated: 2021/04/15 18:31:29 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			y;
	unsigned char	x;
	unsigned char	*a;

	x = c;
	y = 0;
	a = (unsigned char *) b;
	while (y < len)
		a[y++] = x;
	return (b);
}
