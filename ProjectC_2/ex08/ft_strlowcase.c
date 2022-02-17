/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 11:28:15 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/09 11:22:04 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		pos;
	char	x;
	char	*ptr;

	ptr = str;
	pos = 0;
	while (str[pos] != 0)
	{
		if (str[pos] >= 'A' && str[pos] <= 'Z')
		{
			x = str[pos] + 32;
			str[pos] = x;
		}
		pos++;
	}
	return (str);
}
