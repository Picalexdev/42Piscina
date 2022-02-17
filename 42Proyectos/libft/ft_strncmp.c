/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 14:13:23 by apico-su          #+#    #+#             */
/*   Updated: 2021/04/16 15:56:40 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	pos;

	pos = 0;
	if (n == 0)
		return (0);
	while (n != 0)
	{
		if (s1[pos] != s2[pos])
			return ((unsigned char)s1[pos] - (unsigned char)s2[pos]);
		if (s1[pos] == 0)
			return (0);
		pos++;
		n--;
	}
	return (0);
}
