/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:16:47 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/11 10:15:03 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	turn_dectohex(int x)
{
	char	resto;

	if (x > 0)
	{
		if (x % 16 > 9)
			resto = (x % 16) - 10 + 'a';
		else
			resto = x % 16 + '0';
		turn_dectohex(x / 16);
	}
	write(1, &resto, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		pos;
	char	x;

	pos = -1;
	while (str[++pos] != 0)
	{
		if (str[pos] < 32 || str[pos] > 126)
		{
			write(1, "\\", 1);
			if (str[pos] < 16)
				write(1, "0", 1);
			turn_dectohex(str[pos]);
		}
		else
		{
			x = str[pos];
			write(1, &x, 1);
		}
	}
}
