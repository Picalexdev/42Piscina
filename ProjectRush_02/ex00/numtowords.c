/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numtowords.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:39:16 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/16 11:49:54 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char	*reverse_atoi(unsigned int num)
{
	int				x;
	unsigned int	z;
	unsigned int	a;
	char			*dest;

	dest = malloc(18);
	a = 1;
	x = 0;
	z = 0;
	while (num / a)
	{
		a = a * 10;
	}
	a = a / 10;
	while (a > 0)
	{
		dest[x] = (num / a) - (z * 10) + '0';
		z = (num / a);
		a = a / 10;
		x++;
	}
	dest[x] = ':';
	dest[x + 1] = 0;
	free(dest);
	return (dest);
}

void	ft_strcat(char *dest, char *src)
{
	unsigned int num;
	unsigned int x;

	num = 0;
	x = 0;
	while (dest[num] != 0)
		num++;
	while (src[x] != 0)
	{
		dest[num] = src[x];
		x++;
		num++;
	}
	dest[num] = ' ';
	dest[num + 1] = 0;
}

void	final_touches(char *final)
{
	int x;

	x = ft_strlen(final) - 1;
	if (final[x] == ' ')
		final[x] = '\n';
	else
		final[x] = '\n';
	final[x + 1] = 0;
}

void	writenum(char *buf, char *src, char *final)
{
	char	*dest;

	dest = ft_strstr(buf, src);
	dest = ft_justone(dest, src);
	ft_strcat(final, dest);
}

void	write_final(char *final)
{
	int		x;
	char	y;

	x = 0;
	while (final[x])
	{
		y = final[x];
		write(1, &y, 1);
		x++;
	}
}
