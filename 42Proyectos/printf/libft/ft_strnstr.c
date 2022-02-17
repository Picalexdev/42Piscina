/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:43:24 by apico-su          #+#    #+#             */
/*   Updated: 2021/04/15 20:58:00 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	int		y;

	x = 0;
	if (!*needle)
		return ((char *) haystack);
	while (haystack[x] && x < len)
	{
		y = 0;
		while (needle[y] == haystack[x + y] && x + y < len)
		{
			if (needle[y + 1] == 0)
				return ((char *) haystack + x);
			y++;
		}
		x++;
	}
	return (NULL);
}
