/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 10:06:01 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/09 11:22:00 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		pos;
	char	x;
	char	*ptr;

	ptr = str;
	pos = 0;
	while (str[pos] != 0)
	{
		if (str[pos] >= 'a' && str[pos] <= 'z')
		{
			x = str[pos] - 32;
			str[pos] = x;
		}
		pos++;
	}
	return (str);
}
