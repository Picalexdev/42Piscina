/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 17:20:10 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/17 14:05:22 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int				ft_strlen(char *str)
{
	int a;

	a = 0;
	while (*(str + a) != 0)
		a++;
	return (a);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int num;
	unsigned int x;
	unsigned int y;

	num = 0;
	x = ft_strlen(dest);
	y = ft_strlen(src);
	while (src[num] != 0 && y < size - x && num < size - x)
	{
		dest[num + x] = src[num];
		num++;
	}
	dest[num + x] = 0;
	return (dest);
}
