/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 11:08:17 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/16 15:13:36 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	tres_primeros(char *buf, unsigned int value, char *dest)
{
	if (value > 99)
	{
		writenum(buf, reverse_atoi(value / 100), dest);
		writenum(buf, reverse_atoi(100), dest);
	}
	if ((value % 100) > 19)
	{
		writenum(buf, (reverse_atoi(((value % 100) / 10) * 10)), dest);
		if ((value % 10) > 0)
		{
			writenum(buf, reverse_atoi(value % 10), dest);
		}
	}
	else if ((value % 100) > 9)
		writenum(buf, reverse_atoi(value % 100), dest);
	else if ((value % 10) > 0)
		writenum(buf, reverse_atoi(value % 10), dest);
}

void	millares(unsigned int value, char *buf, char *dest)
{
	if (value > 999999999)
	{
		tres_primeros(buf, value % 1000000000000, dest);
		writenum(buf, reverse_atoi(1000000000), dest);
	}
	if (value > 999999)
	{
		tres_primeros(buf, (value % 1000000000) / 1000000, dest);
		if (((value % 1000000000) / 1000000) > 0)
			writenum(buf, reverse_atoi(1000000), dest);
	}
	if (value > 999)
	{
		tres_primeros(buf, (value % 1000000) / 1000, dest);
		if (((value % 1000000) / 1000) > 0)
			writenum(buf, reverse_atoi(1000), dest);
	}
	tres_primeros(buf, value % 1000, dest);
}

int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a] != 0)
		a++;
	return (a);
}
