/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 14:57:41 by apico-su          #+#    #+#             */
/*   Updated: 2021/04/15 19:07:44 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*a;
	char	b;
	int		x;

	a = (char *) s;
	b = (char) c;
	x = ft_strlen(a);
	while (a[x] != b && x)
		x--;
	if (a[x] == b)
		return (&a[x]);
	else
		return (NULL);
}
