/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:36:14 by apico-su          #+#    #+#             */
/*   Updated: 2021/04/15 17:50:39 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*a;
	char	b;
	int		x;

	a = (char *) s;
	b = (char) c;
	x = 0;
	while (a[x] != b && a[x])
		x++;
	if (a[x] == b)
		return (&a[x]);
	else
		return (NULL);
}
