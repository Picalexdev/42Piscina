/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 16:30:08 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/16 15:01:41 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char			*ft_strstr(char *buf, char *to_find)
{
	int		pos;
	int		x;
	int		count;

	count = 0;
	while (to_find[count] != 0)
		count++;
	pos = 0;
	while (buf[pos] != 0 && x != count)
	{
		x = 0;
		while (buf[pos + x] == to_find[x])
		{
			if (buf[pos + x] != 0 && to_find[x] != 0)
				x++;
		}
		pos++;
	}
	if (x == count)
		return (&buf[pos - 1]);
	else
		return (0);
}

unsigned int	ft_multiply(int num, int times)
{
	int x;

	x = 0;
	while (x < times)
	{
		num = num * 10;
		x++;
	}
	return (num);
}

unsigned int	ft_atoi(char *value)
{
	unsigned int	x;
	int				y;
	int				z;
	int				a;

	a = 0;
	x = 0;
	y = ft_strlen(value) - 1;
	if (value[0] == '-')
		error();
	if (strlen(value) > 9)
		error();
	while (value[a] >= '0' && value[a] <= '9')
	{
		z = value[a] - '0';
		x = x + (ft_multiply(z, y));
		a++;
		y--;
	}
	if (value[a] != 0)
		error();
	return (x);
}

char			*ft_justone(char *src, char *extra)
{
	char	*dest;
	int		i;
	int		x;

	dest = malloc(sizeof(char) * 20);
	x = ft_strlen(extra) + 1;
	i = 0;
	while (src[i + x] != '\n')
	{
		dest[i] = src[i + x];
		i++;
	}
	dest[i] = 0;
	free(dest);
	return (dest);
}

int				main(int count, char **values)
{
	unsigned int	num;
	char			*buf;
	char			*dest;

	dest = malloc(sizeof(char) * 1000);
	num = 1;
	buf = NULL;
	if (count == 2)
	{
		buf = file_open("numbers.dict");
		num = ft_atoi(values[1]);
	}
	else if (count == 3)
	{
		buf = file_open(values[1]);
		num = ft_atoi(values[2]);
	}
	else
		error();
	millares(num, buf, dest);
	final_touches(dest);
	write_final(dest);
	free(dest);
	free(buf);
}
