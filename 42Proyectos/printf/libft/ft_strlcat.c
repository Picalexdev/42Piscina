/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 17:20:10 by apico-su          #+#    #+#             */
/*   Updated: 2021/04/15 21:47:59 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	total;
	size_t	original;

	original = size;
	total = ft_strlen(dst) + ft_strlen((char *) src);
	while (*dst && size > 0)
	{
		dst++;
		size--;
	}
	if (size == 0)
		return (ft_strlen((char *) src) + original);
	while (*src && size > 1)
	{
		*dst++ = *src++;
		size--;
	}
	*dst = 0;
	return (total);
	return (0);
}
