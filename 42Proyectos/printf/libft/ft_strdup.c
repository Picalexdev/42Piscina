/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:43:20 by apico-su          #+#    #+#             */
/*   Updated: 2021/04/16 16:51:04 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*x;
	int		y;

	x = malloc(ft_strlen((char *) s1) + 1);
	y = -1;
	if (!x)
		return (NULL);
	while (s1[++y])
		x[y] = s1[y];
	x[y] = 0;
	return ((void *) x);
}
